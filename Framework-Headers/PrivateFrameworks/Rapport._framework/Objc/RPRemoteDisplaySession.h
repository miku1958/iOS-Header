//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>
#import <Rapport/RPRemoteDisplayXPCClientInterface-Protocol.h>

@class CUBonjourDevice, NSNumber, NSString, NSXPCConnection, RPRemoteDisplayDevice, RPRemoteDisplayServer;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    struct NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_requestRegistrations;
    BOOL _needsAWDL;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    unsigned long long _controlFlags;
    RPRemoteDisplayDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CUBonjourDevice *_bonjourDevice;
    RPRemoteDisplayDevice *_daemonDevice;
    RPRemoteDisplayServer *_server;
    NSNumber *_sessionID;
    NSXPCConnection *_xpcCnx;
}

@property (copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property (strong, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property (nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property (strong, nonatomic) RPRemoteDisplayDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property (strong, nonatomic) RPRemoteDisplayDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property (readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (nonatomic) BOOL needsAWDL; // @synthesize needsAWDL=_needsAWDL;
@property (nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property (readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property (strong, nonatomic) RPRemoteDisplayServer *server; // @synthesize server=_server;
@property (copy, nonatomic) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property (strong, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)remoteDisplayAuthCompleted:(id)arg1;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)remoteDisplayReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)remoteDisplayReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)remoteDisplaySessionError:(id)arg1;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)tryPassword:(id)arg1;

@end

