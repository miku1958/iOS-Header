//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface NURuleSystem : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_state;
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
    BOOL _enableLogging;
}

@property (readonly, copy, nonatomic) NSArray *agenda;
@property (copy, nonatomic) NSDictionary *constants;
@property (nonatomic) BOOL enableLogging; // @synthesize enableLogging=_enableLogging;
@property (readonly, copy, nonatomic) NSArray *executed;
@property (readonly, copy, nonatomic) NSDictionary *facts;
@property (readonly, copy, nonatomic) NSArray *rules;
@property (readonly, copy, nonatomic) NSString *runLog;
@property (readonly, copy, nonatomic) NSDictionary *state; // @synthesize state=_state;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addRuleToAgenda:(id)arg1;
- (void)addRule:(id)arg1;
- (void)addRulesFromArray:(id)arg1;
- (void)assertFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(double)arg2;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate;
- (double)gradeForFact:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maximumGradeForFacts:(id)arg1;
- (double)minimumGradeForFacts:(id)arg1;
- (void)removeAllRules;
- (void)reset;
- (void)resetAndEvaluateWithInitialState:(id)arg1;
- (void)retractFact:(id)arg1;
- (void)retractFact:(id)arg1 grade:(double)arg2;
- (void)setStateObject:(id)arg1 forKey:(id)arg2;

@end
