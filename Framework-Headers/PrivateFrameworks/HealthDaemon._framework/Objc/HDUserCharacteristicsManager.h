//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol HDHealthDaemon, OS_dispatch_queue;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject>
{
    BOOL _shouldUpdateQuantityCharacteristics;
    BOOL _shouldUpdateUserProfile;
    BOOL _needsUpdateAfterUnlock;
    id<HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (copy, nonatomic) NSDictionary *lastUserProfile; // @synthesize lastUserProfile=_lastUserProfile;
@property (nonatomic) BOOL needsUpdateAfterUnlock; // @synthesize needsUpdateAfterUnlock=_needsUpdateAfterUnlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) BOOL shouldUpdateQuantityCharacteristics; // @synthesize shouldUpdateQuantityCharacteristics=_shouldUpdateQuantityCharacteristics;
@property (readonly, nonatomic) BOOL shouldUpdateUserProfile; // @synthesize shouldUpdateUserProfile=_shouldUpdateUserProfile;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDate *userProfileLastUpdated; // @synthesize userProfileLastUpdated=_userProfileLastUpdated;

- (void).cxx_destruct;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id *)arg2;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateUserProfile;
- (BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id *)arg5;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (void)_updateUserProfileForRestoreCompletion:(id)arg1;
- (id)_userCharacteristicForType:(id)arg1 entity:(id *)arg2 error:(id *)arg3;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithHealthDaemon:(id)arg1;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;
- (BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id *)arg3;
- (id)userCharacteristicForType:(id)arg1 error:(id *)arg2;

@end
