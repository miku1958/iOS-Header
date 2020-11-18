//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class NSArray, NSDictionary, NSMutableOrderedSet, NSString, NSXPCConnection, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    struct NSMutableSet *_assertions;
    struct NSMutableDictionary *_deviceDictionary;
    struct NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    struct NSMutableDictionary *_requestRegistrations;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _flags;
    unsigned int _internalAuthFlags;
    NSString *_password;
    CDUnknownBlockType _authCompletionHandler;
    CDUnknownBlockType _showPasswordHandler;
    CDUnknownBlockType _hidePasswordHandler;
    CDUnknownBlockType _promptForPasswordHandler;
    NSString *_appID;
    unsigned long long _controlFlags;
    RPCompanionLinkDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    RPCompanionLinkDevice *_localDevice;
    CDUnknownBlockType _localDeviceUpdatedHandler;
    NSDictionary *_siriInfo;
}

@property (readonly, copy) NSArray *activeDevices;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property (copy, nonatomic) CDUnknownBlockType authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property (nonatomic) unsigned long long controlFlags; // @synthesize controlFlags=_controlFlags;
@property (strong, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (copy, nonatomic) CDUnknownBlockType hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property (readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong) RPCompanionLinkDevice *localDevice; // @synthesize localDevice=_localDevice;
@property (copy, nonatomic) CDUnknownBlockType localDeviceUpdatedHandler; // @synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler;
@property (nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property (readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property (copy, nonatomic) CDUnknownBlockType promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property (copy, nonatomic) CDUnknownBlockType showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property (copy, nonatomic) NSDictionary *siriInfo; // @synthesize siriInfo=_siriInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateAssertion:(id)arg1;
- (void)_invalidated;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_lostAllDevices;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3;
- (void)_registerProfileID:(id)arg1 reregister:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3;
- (void)_reregisterAssertions;
- (void)_reregisterEvents;
- (void)_reregisterProfileIDs;
- (void)_reregisterRequests;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)companionLinkAuthCompleted:(id)arg1;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkFoundDevice:(id)arg1;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (BOOL)shouldReportDevice:(id)arg1;
- (void)tryPassword:(id)arg1;

@end

