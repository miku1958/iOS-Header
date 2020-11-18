//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REScriptASTNode.h>

@class REScriptToken;

@interface REScriptASTPrefixExpressionNode : REScriptASTNode
{
    REScriptToken *_prefixOperator;
    REScriptASTNode *_node;
}

@property (readonly, nonatomic) REScriptASTNode *node; // @synthesize node=_node;
@property (readonly, nonatomic) REScriptToken *prefixOperator; // @synthesize prefixOperator=_prefixOperator;

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)dependencies;
- (id)initWithPrefixOperatorToken:(id)arg1 primaryExpression:(id)arg2;

@end
