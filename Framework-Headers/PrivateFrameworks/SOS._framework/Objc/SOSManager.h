//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SOS/SOSClientProtocol-Protocol.h>
#import <SOS/SOSInternalClientProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol>
{
    BOOL _sendingLocationUpdate;
    long long _sosInitiationState;
    long long _sosInteractiveState;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    int _connectionRequestNotificationToken;
    NSXPCConnection *_connection;
    NSString *_mostRecentSOSActivationReason;
}

@property (nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;
@property (nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
@property (nonatomic) long long currentSOSInitiationState;
@property (nonatomic) long long currentSOSInteractiveState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *mostRecentSOSActivationReason; // @synthesize mostRecentSOSActivationReason=_mostRecentSOSActivationReason;
@property (readonly) Class superclass;

+ (long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)arg1;
+ (void)_beginSOSCallWithCompletion:(CDUnknownBlockType)arg1 triggerMechanism:(long long)arg2;
+ (void)_triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)deviceSupportsSOS;
+ (void)notifySOSTriggerMechanismChanged;
+ (id)sharedInstance;
+ (BOOL)shouldTriggerSOS;
+ (void)triggerSOS;
+ (void)triggerSOSWithCompletion:(CDUnknownBlockType)arg1;
+ (void)triggerSOSWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)triggerSOSWithUUID:(id)arg1 triggerMechanism:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_resetStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_waitForInitialState;
- (void)dealloc;
- (void)dismissClientSOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSOSWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isSendingLocationUpdate;
- (BOOL)longPressTriggersEmergencySOS;
- (void)mostRecentLocationSentWithCompletion:(CDUnknownBlockType)arg1;
- (id)remoteSOSEngineProxy;
- (void)setLongPressTriggersEmergencySOS:(BOOL)arg1;
- (void)setSendingLocationUpdate:(BOOL)arg1;
- (void)startSendingLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSendingLocationUpdate;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)willStartSendingLocationUpdate;

@end

