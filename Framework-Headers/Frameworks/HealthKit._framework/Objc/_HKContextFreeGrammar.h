//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableSet, _HKCFGNonTerminal;

@interface _HKContextFreeGrammar : NSObject
{
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
    _HKCFGNonTerminal *_rootNonTerminal;
    CDUnknownBlockType _emptyStringEvaluator;
}

@property (readonly, nonatomic) CDUnknownBlockType emptyStringEvaluator; // @synthesize emptyStringEvaluator=_emptyStringEvaluator;
@property (readonly, nonatomic) _HKCFGNonTerminal *rootNonTerminal; // @synthesize rootNonTerminal=_rootNonTerminal;

+ (id)grammarWithRootNonTerminal:(id)arg1;
+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_gatherExpressions;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)parseTreeForString:(id)arg1;

@end
