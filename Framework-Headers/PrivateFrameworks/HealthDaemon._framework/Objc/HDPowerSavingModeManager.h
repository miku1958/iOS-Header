//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, NSString, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface HDPowerSavingModeManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    RadiosPreferences *_radioPrefs;
    BOOL _powerSavingModeEnabled;
    BOOL _supportsCellularTelephony;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_powerSavingModeDidChange;
- (void)_queue_disablePowerSavingIfNeeded;
- (void)_queue_enablePowerSavingIfNeeded;
- (void)_queue_powerSavingModeDidChange;
- (void)_startObservingPowerSavingModeSetting;
- (void)_stopObservingPowerSavingModeSetting;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)supportsPowerSavingForActivityType:(unsigned long long)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2;

@end

