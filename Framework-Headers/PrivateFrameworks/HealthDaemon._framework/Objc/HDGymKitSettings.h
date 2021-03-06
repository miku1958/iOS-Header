//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/NRDevicePropertyObserver-Protocol.h>

@class HDProfile, NRDevice, NSString;
@protocol HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver>
{
    HDProfile *_profile;
    unsigned long long _nfcPermission;
    struct os_unfair_lock_s _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
    id<HDGymKitSettingsDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDGymKitSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long nfcPermission;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_currentActivityMoveModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableNFCAlwaysOnIfWatchWorkout;
- (void)_handleNFCPreferencesForNFCAlwaysOn:(BOOL)arg1;
- (BOOL)_isSatelliteWatch;
- (void)_monitorFieldAndPrivacySettings;
- (void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(BOOL)arg1;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)_startObservingWatchWorkouts;
- (void)_stopObservingWatchWorkouts;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)unitTest_simulateNRDeviceUpdate;

@end

