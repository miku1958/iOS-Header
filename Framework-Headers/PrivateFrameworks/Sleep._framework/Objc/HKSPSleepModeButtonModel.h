//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPSleepStorePrivateObserver-Protocol.h>

@class HKSPSleepStore, NSString, _HKBehavior;
@protocol HKSPSleepModeButtonModelDelegate;

@interface HKSPSleepModeButtonModel : NSObject <HKSPSleepStorePrivateObserver>
{
    id<HKSPSleepModeButtonModelDelegate> _delegate;
    HKSPSleepStore *_sleepStore;
    long long _sleepMode;
    _HKBehavior *_behavior;
}

@property (readonly, nonatomic) _HKBehavior *behavior; // @synthesize behavior=_behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HKSPSleepModeButtonModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) long long sleepMode; // @synthesize sleepMode=_sleepMode;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore; // @synthesize sleepStore=_sleepStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkSleepModeState;
- (void)_launchAppForOnboarding;
- (void)_queue_updateStateWithSleepMode:(long long)arg1;
- (void)_updateStateWithSleepMode:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithSleepStore:(id)arg1 delegate:(id)arg2 behavior:(id)arg3;
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2;

@end

