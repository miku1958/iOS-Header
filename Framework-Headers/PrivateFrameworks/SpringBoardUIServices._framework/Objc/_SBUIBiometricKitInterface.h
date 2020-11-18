//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUIServices/BKMatchOperationDelegate-Protocol.h>
#import <SpringBoardUIServices/BKOperationDelegate-Protocol.h>

@class BKDevicePearl, BKDeviceTouchID, NSSet, NSString;
@protocol OS_dispatch_queue, _SBUIBiometricKitInterfaceDelegate;

@interface _SBUIBiometricKitInterface : NSObject <BKOperationDelegate, BKMatchOperationDelegate>
{
    NSSet *_biometricDevices;
    unsigned long long _enrolledIdentitiesCount;
    int _enrollmentChangedNotifyToken;
    BOOL _isFingerDetected;
    BKDeviceTouchID *_mesaDevice;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BKDevicePearl *_pearlDevice;
    id<_SBUIBiometricKitInterfaceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<_SBUIBiometricKitInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPearlIDCapable) BOOL pearlIDCapable;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchIDCapable) BOOL touchIDCapable;

- (void).cxx_destruct;
- (id)_createPresenceDetectOperationsForDeviceTypes:(id)arg1 error:(id *)arg2;
- (unsigned long long)_eventForLockoutState:(long long)arg1;
- (void)_sendDelegateEvent:(unsigned long long)arg1;
- (void)_setTracker:(id)arg1 forOperation:(id)arg2;
- (id)_trackerForOperation:(id)arg1;
- (id)createFingerDetectOperationsWithError:(id *)arg1;
- (id)createMatchOperationsWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 error:(id *)arg3;
- (id)createPearlDevice;
- (id)createPresenceDetectOperationsWithError:(id *)arg1;
- (void)dealloc;
- (BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id *)arg2;
- (BOOL)hasEnrolledIdentities;
- (id)init;
- (BOOL)isFingerOn;
- (unsigned long long)lockoutState;
- (void)matchOperation:(id)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(id)arg1 matchedWithResult:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;

@end
