//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MFMessageCriterionConverterDelegate;

@interface MFMessageCriterionConverter : NSObject
{
    id<MFMessageCriterionConverterDelegate> _delegate;
}

@property (weak, nonatomic) id<MFMessageCriterionConverterDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (long long)_criterionTypeForKey:(id)arg1;
- (long long)_criterionTypeFromExpression:(id)arg1;
- (long long)_defaultCriterionTypeForKey:(id)arg1;
- (id)_defaultKeysForCriterionType:(long long)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3;
- (id)_predicateKeysForCriterion:(long long)arg1;
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2;
- (id)_searchPredicateForCriterion:(id)arg1;
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2;
- (id)messageCriterionFromPredicate:(id)arg1;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;
- (id)predicateFromMessageCriterion:(id)arg1;

@end

