//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitIdentity, NSCondition, NSTimer;
@protocol BiometricKitDelegate, OS_dispatch_queue;

@interface BiometricKit : NSObject
{
    BiometricKitIdentity *_enrolledIdentity;
    BiometricKitIdentity *_matchingIdentity;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSTimer *_fingerOffTimer;
    NSCondition *_operationCondition;
    BOOL _fingerOn;
    BOOL _fingerOnStatusState;
    BOOL _fingerOffRequest;
    BOOL _matchingMode;
    BOOL _fingerDetectMode;
    BOOL _cancelOperation;
    BOOL _inUse;
    int _enrollProgressConfigRenderMode;
    id<BiometricKitDelegate> _delegate;
}

@property (nonatomic) id<BiometricKitDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) int enrollProgressConfigRenderMode; // @synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode;
@property BOOL inUse; // @synthesize inUse=_inUse;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (long long)getSensorPatchVersion;
+ (id)manager;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)delegateStatusMessage:(unsigned int)arg1;
- (int)detectFingerWithOptions:(id)arg1;
- (int)detectPresenceWithOptions:(id)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL *)arg3 withDetails:(id *)arg4;
- (int)dropUnlockToken;
- (int)enableBackgroundFdet:(BOOL)arg1;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (int)enroll:(int)arg1 withOptions:(id)arg2;
- (BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (void)fingerOffTimerFired:(id)arg1;
- (int)forceBioLockout;
- (int)forceBioLockoutForUser:(unsigned int)arg1;
- (long long)getBioLockoutState;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (long long)getCalBlobVersion;
- (id)getCalibrationDataInfo;
- (long long)getCalibrationDataState;
- (int)getCountersignedStoreToken:(id *)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (id)getIdentitiesDatabaseHash;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUID;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(BOOL)arg1 withDetails:(id *)arg2;
- (id)getMatchPolicyInfo;
- (long long)getMaxIdentityCount:(int)arg1;
- (float)getModulationRatio;
- (id)getProtectedConfiguration;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getSensorInfo;
- (id)getSystemProtectedConfiguration;
- (id)getTemplateInfo:(id)arg1;
- (id)identities:(id)arg1;
- (id)init;
- (BOOL)isFingerOn;
- (BOOL)isIdentityEnrolled;
- (BOOL)isTouchIDAvailableWithInfo:(long long *)arg1;
- (BOOL)isTouchIDCapable;
- (int)match:(id)arg1;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)matchIdentities:(id)arg1;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImage:(BOOL)arg1 rotated:(BOOL)arg2;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)registerStoreToken:(id)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)resetAppleConnectCounter;
- (void)setDebugImages:(BOOL)arg1;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)simulateFingerTouchMatching:(BOOL)arg1;
- (void)timestampEvent:(unsigned long long)arg1;
- (int)updateIdentity:(id)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;

@end

