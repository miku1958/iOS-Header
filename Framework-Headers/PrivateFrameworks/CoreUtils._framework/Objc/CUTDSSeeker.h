//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUTDSXPCClientInterface-Protocol.h>
#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    BOOL _directedOnly;
    BOOL _passive;
    int _dataLinkType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    NSString *_xpcServiceName;
    struct NSMutableSet *_endpoints;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

@property (nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
@property (nonatomic) BOOL directedOnly; // @synthesize directedOnly=_directedOnly;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property (strong, nonatomic) NSMutableSet *endpoints; // @synthesize endpoints=_endpoints;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) BOOL passive; // @synthesize passive=_passive;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (nonatomic) unsigned long long tdsHashProvide; // @synthesize tdsHashProvide=_tdsHashProvide;
@property (nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
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
- (void)updateEndpointsForDevices:(struct NSMutableDictionary *)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;

@end

