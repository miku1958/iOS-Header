//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSExpression, NSPredicate, NSPredicateOperator;

@protocol NSPredicateVisitor
- (void)visitPredicate:(NSPredicate *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;
@end
