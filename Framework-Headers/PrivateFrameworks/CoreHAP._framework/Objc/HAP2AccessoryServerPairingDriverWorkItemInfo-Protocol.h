//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2AccessoryServerPairingDriver-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, HAPPairSetupSession, NSError;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPairingDriverWorkItem, HAP2AccessoryServerSecureTransportFactory, HAP2AccessoryServerTransport, HAP2UnpairedAccessoryServer;

@protocol HAP2AccessoryServerPairingDriverWorkItemInfo <HAP2AccessoryServerPairingDriver>

@property (readonly, weak, nonatomic) id<HAP2UnpairedAccessoryServer> accessoryServer;
@property (readonly, weak, nonatomic) id<HAP2AccessoryServerPairingDriverDelegate> delegate;
@property (readonly, nonatomic) id<HAP2AccessoryServerEncoding> encoding;
@property (readonly, nonatomic) unsigned long long featureFlags;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (strong, nonatomic) HAPPairSetupSession *pairingSession;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransport> transport;

- (void)workItem:(id<HAP2AccessoryServerPairingDriverWorkItem>)arg1 finishedWithError:(NSError *)arg2;
@end

