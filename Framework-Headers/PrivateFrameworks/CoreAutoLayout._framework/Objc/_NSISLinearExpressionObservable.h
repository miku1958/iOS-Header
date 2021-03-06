//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSISEngine, NSISLinearExpression, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _NSISLinearExpressionObservable : NSObservationSource
{
    NSNumber *_lastValue;
    NSISLinearExpression *_expression;
    NSISEngine *_associatedEngine;
    NSMutableArray *_variableObservations;
    id _changeTransactionObservation;
    BOOL _valueIsDirtied;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;
- (BOOL)_overrideUseFastBlockObservers;
- (id)addObserver:(id)arg1;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

