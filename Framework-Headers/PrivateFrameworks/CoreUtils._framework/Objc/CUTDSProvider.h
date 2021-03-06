//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUTDSXPCClientInterface-Protocol.h>
#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CUTDSProvider : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    BOOL _directedOnly;
    BOOL _triggered;
    int _dataLinkType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _stateChangedHandler;
    NSString *_xpcServiceName;
    unsigned long long _tdsHashActivate;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

@property (nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
@property (nonatomic) BOOL directedOnly; // @synthesize directedOnly=_directedOnly;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property (nonatomic) unsigned long long tdsHashActivate; // @synthesize tdsHashActivate=_tdsHashActivate;
@property (nonatomic) unsigned long long tdsHashProvide; // @synthesize tdsHashProvide=_tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
@property (readonly, nonatomic) BOOL triggered; // @synthesize triggered=_triggered;
@property (copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)updateDeviceActivateHash:(const char *)arg1;
- (BOOL)updateForDevices:(id)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;

@end

