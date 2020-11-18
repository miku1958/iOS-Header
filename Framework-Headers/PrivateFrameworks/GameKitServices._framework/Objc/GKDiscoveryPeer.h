//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/GKSimpleTimerDelegate-Protocol.h>

@class GKDiscoveryPeerConnection, GKSimpleTimer, NSMutableArray, NSMutableSet, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate>
{
    NSString *_serviceName;
    NSString *_playerID;
    NSString *_deviceID;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSMutableArray *_attemptedInterfaces;
    GKDiscoveryPeerConnection *_trialConnection;
    NSNumber *_chosenInterface;
    BOOL _shouldSignalDiscovery;
    NSMutableArray *_sendDataBuffer;
    GKDiscoveryPeerConnection *_connection;
    GKSimpleTimer *_resolveTimer;
    CDUnknownBlockType _resolveTimeoutHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _state;
    double _discoveryTimeStamp;
}

@property (strong, nonatomic) NSMutableArray *attemptedInterfaces; // @synthesize attemptedInterfaces=_attemptedInterfaces;
@property (strong, nonatomic) NSNumber *chosenInterface; // @synthesize chosenInterface=_chosenInterface;
@property (strong, nonatomic) GKDiscoveryPeerConnection *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (nonatomic) double discoveryTimeStamp; // @synthesize discoveryTimeStamp=_discoveryTimeStamp;
@property (strong, nonatomic) NSMutableSet *interfaces; // @synthesize interfaces=_interfaces;
@property (strong, nonatomic) NSMutableArray *orderedInterfaces; // @synthesize orderedInterfaces=_orderedInterfaces;
@property (copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property (copy, nonatomic) CDUnknownBlockType resolveTimeoutHandler; // @synthesize resolveTimeoutHandler=_resolveTimeoutHandler;
@property (strong, nonatomic) GKSimpleTimer *resolveTimer; // @synthesize resolveTimer=_resolveTimer;
@property (strong, nonatomic) NSMutableArray *sendDataBuffer; // @synthesize sendDataBuffer=_sendDataBuffer;
@property (copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (nonatomic) BOOL shouldSignalDiscovery; // @synthesize shouldSignalDiscovery=_shouldSignalDiscovery;
@property (nonatomic) int state; // @synthesize state=_state;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (strong, nonatomic) GKDiscoveryPeerConnection *trialConnection; // @synthesize trialConnection=_trialConnection;

- (void)cleanUpForBrowse;
- (void)dealloc;
- (id)description;
- (void)didLoseInterface:(id)arg1;
- (void)flushDataBuffer;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (id)nextInterfaceIndex;
- (BOOL)parseServiceNameForInit:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startResolveTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)stopResolveTimer;
- (id)stringForState:(int)arg1;
- (void)timeout:(id)arg1;

@end

