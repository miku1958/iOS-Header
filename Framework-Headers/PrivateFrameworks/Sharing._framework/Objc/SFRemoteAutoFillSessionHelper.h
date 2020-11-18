//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSXPCConnection, SDAutoFillAgent;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dismissUserNotificationHandler;
    CDUnknownBlockType _pairingResponseHandler;
    CDUnknownBlockType _promptForPINHandler;
    SDAutoFillAgent *_agent;
}

@property (strong, nonatomic) SDAutoFillAgent *agent; // @synthesize agent=_agent;
@property (copy, nonatomic) CDUnknownBlockType dismissUserNotificationHandler; // @synthesize dismissUserNotificationHandler=_dismissUserNotificationHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType pairingResponseHandler; // @synthesize pairingResponseHandler=_pairingResponseHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)autoFillDismissUserNotification;
- (void)autoFillPairingSucceeded:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)clientDismissUserNotification;
- (void)clientPairingSucceeded:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clientPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)serverDidPickUsername:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)serverTryPIN:(id)arg1;
- (void)serverUserNotificationDidActivate:(id)arg1;
- (void)serverUserNotificationDidDismiss:(id)arg1;

@end

