//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;

@interface GKRuleSystem : NSObject
{
    NSMutableDictionary *_state;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_toBeExecuted;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
}

@property (readonly, strong, nonatomic) NSArray *agenda;
@property (readonly, strong, nonatomic) NSArray *executed;
@property (readonly, strong, nonatomic) NSArray *facts;
@property (readonly, strong, nonatomic) NSArray *rules;
@property (readonly, strong, nonatomic) NSMutableDictionary *state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_addRuleToAgenda:(id)arg1;
- (void)addRule:(id)arg1;
- (void)addRulesFromArray:(id)arg1;
- (void)assertFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(float)arg2;
- (void)evaluate;
- (float)gradeForFact:(id)arg1;
- (id)init;
- (float)maximumGradeForFacts:(id)arg1;
- (float)minimumGradeForFacts:(id)arg1;
- (void)removeAllRules;
- (void)reset;
- (void)retractFact:(id)arg1;
- (void)retractFact:(id)arg1 grade:(float)arg2;

@end

