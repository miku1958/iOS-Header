//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject
{
    id<HKInteractiveChartViewObserver> _observer;
}

@property (readonly, weak, nonatomic) id<HKInteractiveChartViewObserver> observer; // @synthesize observer=_observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;

@end
