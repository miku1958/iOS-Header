//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSPredicateVisitor-Protocol.h>

@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor>
{
    NSSet *_propertyNames;
    BOOL _ok;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (BOOL)isValid:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end

