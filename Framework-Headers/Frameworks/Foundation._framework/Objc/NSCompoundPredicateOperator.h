//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
{
}

+ (id)andPredicateOperator;
+ (id)notPredicateOperator;
+ (id)orPredicateOperator;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2;
- (BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3;
- (id)predicateFormat;
- (id)symbol;

@end
