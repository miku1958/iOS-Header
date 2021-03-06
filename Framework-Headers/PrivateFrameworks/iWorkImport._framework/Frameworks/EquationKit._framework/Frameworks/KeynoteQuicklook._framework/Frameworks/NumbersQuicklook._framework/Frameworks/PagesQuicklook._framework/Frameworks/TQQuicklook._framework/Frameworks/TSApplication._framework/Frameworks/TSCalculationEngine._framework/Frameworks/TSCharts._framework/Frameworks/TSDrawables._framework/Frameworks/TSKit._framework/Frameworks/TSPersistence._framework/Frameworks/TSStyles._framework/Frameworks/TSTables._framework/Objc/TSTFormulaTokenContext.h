//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject
{
    TSTExpressionNode *_expressionNode;
    unsigned long long _parenNestingLevel;
    unsigned long long _argumentIndex;
}

@property (readonly, nonatomic) unsigned long long argumentIndex; // @synthesize argumentIndex=_argumentIndex;
@property (readonly, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=_expressionNode;
@property (readonly, nonatomic) unsigned long long parenNestingLevel; // @synthesize parenNestingLevel=_parenNestingLevel;

+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

