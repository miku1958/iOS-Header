//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERule.h>

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class REComparisonCondition, RECondition, REConditionEvaluator;

@interface RERankingRule : RERule <REAutomaticExportedInterface>
{
    REConditionEvaluator *_leftConditionEvaluator;
    REConditionEvaluator *_rightConditionEvaluator;
    REConditionEvaluator *_comparisonConditionEvaluator;
    RECondition *_leftCondition;
    RECondition *_rightCondition;
    REComparisonCondition *_comparison;
    long long _order;
}

@property (readonly, nonatomic) REComparisonCondition *comparison; // @synthesize comparison=_comparison;
@property (readonly, nonatomic) REConditionEvaluator *comparisonConditionEvaluator;
@property (readonly, nonatomic) RECondition *leftCondition; // @synthesize leftCondition=_leftCondition;
@property (readonly, nonatomic) REConditionEvaluator *leftConditionEvaluator;
@property (readonly, nonatomic) long long order; // @synthesize order=_order;
@property (readonly, nonatomic) RECondition *rightCondition; // @synthesize rightCondition=_rightCondition;
@property (readonly, nonatomic) REConditionEvaluator *rightConditionEvaluator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end
