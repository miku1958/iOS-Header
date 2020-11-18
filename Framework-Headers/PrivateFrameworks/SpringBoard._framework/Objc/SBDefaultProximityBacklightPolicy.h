//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBProximityBacklightPolicy-Protocol.h>

@class NSString, SBBacklightController;
@protocol BSInvalidatable;

@interface SBDefaultProximityBacklightPolicy : NSObject <SBProximityBacklightPolicy>
{
    SBBacklightController *_backlightController;
    id<BSInvalidatable> _idleTimerDisableAssertion;
    BOOL _scheduled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backlightWillUndim:(id)arg1;
- (void)_cancelScheduledBacklightFactorToZero;
- (void)_restoreBacklightFactor;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_scheduleBacklightFactorToZeroAfterDefaultDuration;
- (void)_turnBacklightOff;
- (void)dealloc;
- (id)initWithBacklightController:(id)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2;

@end
