//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCloudXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class CUPairingSession, CUPairingStream, NSError, NSString, NSXPCConnection, RPCloudXPCConnection;
@protocol OS_dispatch_queue;

@interface RPCloudSession : NSObject <NSSecureCoding, RPCloudXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _isClient;
    CUPairingStream *_mainStream;
    CUPairingSession *_pairSetupSession;
    CUPairingSession *_pairVerifySession;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    int _internalState;
    BOOL _stepDone;
    NSError *_stepError;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    unsigned int _destinationPort;
    unsigned int _sourcePort;
    NSString *_password;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    NSString *_destinationID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceIdentifier;
    NSString *_destinationIDMulticast;
    NSString *_destinationIDUnicast;
    RPCloudXPCConnection *_serverXPCCnx;
}

@property (strong, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property (copy, nonatomic) NSString *destinationIDMulticast; // @synthesize destinationIDMulticast=_destinationIDMulticast;
@property (copy, nonatomic) NSString *destinationIDUnicast; // @synthesize destinationIDUnicast=_destinationIDUnicast;
@property (nonatomic) unsigned int destinationPort; // @synthesize destinationPort=_destinationPort;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property (strong, nonatomic) RPCloudXPCConnection *serverXPCCnx; // @synthesize serverXPCCnx=_serverXPCCnx;
@property (copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property (nonatomic) unsigned int sourcePort; // @synthesize sourcePort=_sourcePort;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_clientPairSetup:(id)arg1 start:(BOOL)arg2;
- (void)_clientPairSetupCompleted:(id)arg1;
- (void)_clientRun;
- (void)_clientStartRequest;
- (void)_clientStartResponse:(id)arg1 fromID:(id)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)_pairSetupInvalidate;
- (void)_pairVerifyInvalidate;
- (void)_receivedFrameHeader:(const CDStruct_793dca1b *)arg1 encryptedBodyPtr:(const char *)arg2 bodyLen:(unsigned long long)arg3 fromID:(id)arg4;
- (void)_receivedFrameHeader:(const CDStruct_793dca1b *)arg1 unencryptedBodyPtr:(const char *)arg2 bodyLen:(unsigned long long)arg3 fromID:(id)arg4;
- (void)_receivedStopUnencrypted:(id)arg1;
- (void)_run;
- (void)_sendFrameType:(unsigned char)arg1 destinationID:(id)arg2 unencryptedObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_serverPairSetupCompleted:(id)arg1;
- (void)_serverPairSetupNext:(id)arg1;
- (void)_serverPairSetupStart;
- (void)_serverRun;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)tryPassword:(id)arg1;
- (void)xpcCloudReceivedFrameData:(id)arg1 fromID:(id)arg2;

@end

