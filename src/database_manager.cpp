#include <database_manager.h>



int DatabaseManager::ConnectDatabase()
    {
        char db_name[databaseName.length()+1];
        strcpy(db_name, databaseName.c_str());
        std::cout<<db_name<<std::endl;
        int rc = sqlite3_open(db_name, &db);
        if(rc)
        {
            fprintf(stderr, "Can't open database : %s ", sqlite3_errmsg(db));
            return 0;
        }
        std::cout<<"Database opened successfully"<<std::endl;
        return 1;
    }

bool DatabaseManager::UserAuthenticate(std::string email_, std::string password_)
    {
        std::string query = "SELECT CASE WHEN EXISTS (SELECT email, password FROM USERS WHERE USERS.email = ? AND USERS.password = ?) THEN 1 ELSE 0 END;";
        sqlite3_stmt* statement;
        int rc = sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr);
        if (rc != SQLITE_OK) {
            std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_finalize(statement);
            return false;
        }
        rc = sqlite3_bind_text(statement, 1, email_.c_str(), -1, SQLITE_TRANSIENT);
        rc = sqlite3_bind_text(statement, 2, password_.c_str(), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            std::cerr << "Error binding parameter: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_finalize(statement);
            return false;
        }
        rc = sqlite3_step(statement);
        if (rc == SQLITE_ROW) {
            int result = sqlite3_column_int(statement, 0);
            return result;
        
        } else if (rc == SQLITE_DONE) {
        std::cerr << "Query returned no results." << std::endl;
        } else {
        std::cerr << "Error executing query: " << sqlite3_errmsg(db) << std::endl;
        }
        sqlite3_finalize(statement);

        return false;
    }





    UserInfo DatabaseManager::GetUserFromDatabase(std::string email, std::string password)
    {
        std::string query = "SELECT * FROM USERS WHERE email = ? AND password = ?;";
        sqlite3_stmt* statement;
        int rc = sqlite3_prepare_v2(db, query.c_str(), -1, &statement, nullptr);
        if (rc != SQLITE_OK) {
            std::cerr << "Error preparing statement: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_finalize(statement);
            std::cerr<<"Error "<<__FILE__<<" : "<<__LINE__<<std::endl;
        }
        rc = sqlite3_bind_text(statement, 1, email.c_str(), -1, SQLITE_TRANSIENT);
        rc = sqlite3_bind_text(statement, 2, password.c_str(), -1, SQLITE_TRANSIENT);
        if (rc != SQLITE_OK) {
            std::cerr << "Error binding parameter: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_finalize(statement);
            std::cerr<<"Error "<<__FILE__<<" : "<<__LINE__<<std::endl;
        }
        rc = sqlite3_step(statement);
        UserInfo infos;
        if(rc == SQLITE_ROW)
        {
            // Retrieve values for each column in the current row
            
            infos.personelInfo.id = sqlite3_column_int(statement, 0);
            infos.personelInfo.name = std::string(reinterpret_cast<const char*>(sqlite3_column_text(statement, 1)));
            infos.personelInfo.surname = std::string(reinterpret_cast<const char*>(sqlite3_column_text(statement, 2)));
            infos.personelInfo.email = std::string(reinterpret_cast<const char*>(sqlite3_column_text(statement, 3)));
            infos.personelInfo.password = std::string(reinterpret_cast<const char*>(sqlite3_column_text(statement, 4)));
            infos.personelInfo.accountType = std::string(reinterpret_cast<const char*>(sqlite3_column_text(statement, 5)));
            infos.aviableAuthorization.ableToDeleteAccount = sqlite3_column_int(statement, 6);
            infos.aviableAuthorization.ableToAddNewAccount = sqlite3_column_int(statement, 7);
            infos.aviableAuthorization.ableToSetAuthority = sqlite3_column_int(statement, 8);
        }

        return infos;
    }

    void SetUserToDabase()
    {

    }