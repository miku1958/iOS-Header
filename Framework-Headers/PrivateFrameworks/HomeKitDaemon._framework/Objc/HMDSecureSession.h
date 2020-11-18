//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPRemoteSession, HMDAWDRemoteSessionMetric, HMDIDSMessageDispatcher, HMDIdentityRegistry, HMDNotificationRelay, HMDSecureSessionNotifications, HMDUser, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSecureSession : NSObject
{
    BOOL _clientMode;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_destination;
    HMDUser *_peer;
    HMDIDSMessageDispatcher *_msgDispatcher;
    HAPRemoteSession *_hapRemoteSession;
    HMDIdentityRegistry *_identityRegistry;
    CDUnknownBlockType _stoppedNotificationHandler;
    HMDNotificationRelay *_notificationRelay;
    HMDSecureSessionNotifications *_sessionNotifications;
    HMDAWDRemoteSessionMetric *_metric;
}

@property (nonatomic) BOOL clientMode; // @synthesize clientMode=_clientMode;
@property (copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) HAPRemoteSession *hapRemoteSession; // @synthesize hapRemoteSession=_hapRemoteSession;
@property (strong, nonatomic) HMDIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property (readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property (strong, nonatomic) HMDIDSMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) HMDNotificationRelay *notificationRelay; // @synthesize notificationRelay=_notificationRelay;
@property (strong, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property (readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) HMDSecureSessionNotifications *sessionNotifications; // @synthesize sessionNotifications=_sessionNotifications;
@property (copy, nonatomic) CDUnknownBlockType sessionStoppedNotificationHandler;
@property (copy, nonatomic) CDUnknownBlockType stoppedNotificationHandler; // @synthesize stoppedNotificationHandler=_stoppedNotificationHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)whitelistedRemoteAccessCommands;
- (void).cxx_destruct;
- (void)_configureAsClient:(BOOL)arg1 queue:(id)arg2 nonSecure:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleSecureMessage:(id)arg1;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 sessionNotifications:(id)arg3 identityRegistry:(id)arg4 notificationRelay:(id)arg5 clientMode:(BOOL)arg6 sessionID:(id)arg7;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)startAndInvokeOnQueue:(id)arg1 nonSecure:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stop;

@end
