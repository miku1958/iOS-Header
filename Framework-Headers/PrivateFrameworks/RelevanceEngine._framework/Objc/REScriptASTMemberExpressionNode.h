//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTMemberExpressionNode : REScriptASTNode
{
    REScriptASTNode *_expression;
    REScriptToken *_member;
}

@property (readonly, nonatomic) REScriptASTNode *expression; // @synthesize expression=_expression;
@property (readonly, nonatomic) REScriptToken *member; // @synthesize member=_member;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithMember:(id)arg1 expression:(id)arg2;

@end
