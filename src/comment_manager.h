#ifndef COMMENT_MANAGER
#define COMMENT_MANAGER 

#include <account_manager.h>

class CommentTypes
{

public:
    virtual void EXIT() = 0;
};

class CustomerCommetType : public CommentTypes
{

};

class AdminCommentTypes : public CommentTypes
{


public:

};


#endif



