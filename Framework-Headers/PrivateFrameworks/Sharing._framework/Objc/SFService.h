//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFService : NSObject <NSSecureCoding, SFXPCInterface>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_requestQueue;
    NSXPCConnection *_xpcCnx;
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _supportsAirPlayReceiver;
    BOOL _wakeDevice;
    BOOL _watchLocked;
    long long _advertiseRate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _eventMessageHandler;
    NSString *_identifier;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _requestMessageHandler;
    CDUnknownBlockType _responseMessageInternalHandler;
    NSUUID *_serviceUUID;
}

@property (nonatomic) long long advertiseRate; // @synthesize advertiseRate=_advertiseRate;
@property (nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property (nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType eventMessageHandler; // @synthesize eventMessageHandler=_eventMessageHandler;
@property (nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property (nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property (copy, nonatomic) CDUnknownBlockType requestMessageHandler; // @synthesize requestMessageHandler=_requestMessageHandler;
@property (copy, nonatomic) CDUnknownBlockType responseMessageInternalHandler; // @synthesize responseMessageInternalHandler=_responseMessageInternalHandler;
@property (copy, nonatomic) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property (nonatomic) BOOL supportsAirPlayReceiver; // @synthesize supportsAirPlayReceiver=_supportsAirPlayReceiver;
@property (nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property (nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_performActivateSafeChange:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)serviceError:(id)arg1;
- (void)serviceReceivedEvent:(id)arg1;
- (void)serviceReceivedRequest:(id)arg1;
- (void)serviceReceivedResponse:(id)arg1;
- (void)updateWithService:(id)arg1;

@end
