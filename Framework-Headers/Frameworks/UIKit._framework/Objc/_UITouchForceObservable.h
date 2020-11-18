//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

#import <UIKit/NSObserver-Protocol.h>

@class NSObservation, NSString, UIView, _UITouchesObservingGestureRecognizer;

@interface _UITouchForceObservable : NSObservationSource <NSObserver>
{
    UIView *_view;
    long long _observerCount;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    NSObservation *_touchesObservation;
    BOOL _haveSeenAnyTouches;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didEndHavingAnyObservers;
- (double)_maximumPossibleForceForTouches:(id)arg1;
- (BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1;
- (double)_timestampForTouches:(id)arg1;
- (double)_unclampedTouchForceForTouches:(id)arg1;
- (void)_willBeginHavingAnyObservers;
- (id)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(id)arg1;

@end

