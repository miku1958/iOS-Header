//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySession : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_endpointsChangedCallbacks;
    NSMutableDictionary *_outputDevicesChangedCallbacks;
    BOOL _alwaysAllowUpdates;
    BOOL _populatesExternalDevice;
    NSMapTable *_clientDiscoveryStates;
}

@property (nonatomic) BOOL alwaysAllowUpdates; // @synthesize alwaysAllowUpdates=_alwaysAllowUpdates;
@property (readonly, nonatomic) NSArray *availableEndpoints; // @dynamic availableEndpoints;
@property (readonly, nonatomic) NSArray *availableOutputDevices; // @dynamic availableOutputDevices;
@property (strong, nonatomic) NSMapTable *clientDiscoveryStates; // @synthesize clientDiscoveryStates=_clientDiscoveryStates;
@property (readonly, nonatomic) BOOL devicePresenceDetected; // @dynamic devicePresenceDetected;
@property (nonatomic) unsigned int discoveryMode; // @dynamic discoveryMode;
@property (nonatomic) unsigned int endpointFeatures; // @dynamic endpointFeatures;
@property (readonly, nonatomic) NSArray *endpointsChangedCallbacks;
@property (readonly, nonatomic) NSArray *outputDevicesChangedCallbacks;
@property (nonatomic) BOOL populatesExternalDevice; // @synthesize populatesExternalDevice=_populatesExternalDevice;
@property (copy, nonatomic) NSString *routingContextUID; // @dynamic routingContextUID;
@property (nonatomic) unsigned int targetAudioSessionID; // @dynamic targetAudioSessionID;

+ (id)discoverySessionWithConfiguration:(id)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;
+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(BOOL)arg2;
+ (id)sharedDiscoverySessionForClass:(Class)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (id)addEndpointsChangedCallback:(CDUnknownBlockType)arg1;
- (id)addOutputDevicesChangedCallback:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFeatures:(unsigned int)arg1;
- (void)logEndpointsChanged:(id)arg1 oldEndpoints:(id)arg2;
- (void)logOutputDevicesChanged:(id)arg1 oldOutputDevices:(id)arg2;
- (void)notifyEndpointsChanged:(id)arg1;
- (void)notifyOutputDevicesChanged:(id)arg1 forFeature:(unsigned int)arg2;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;

@end
