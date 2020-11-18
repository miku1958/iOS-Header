//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCommonClass-Protocol.h>
#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, RPCompanionLinkClient, _DKEventTypeResultStatsCounter;
@protocol OS_dispatch_source;

@interface _DKSyncRapportCommonStorage : NSObject <_DKSyncRemoteStorage, _DKSyncCommonClass>
{
    BOOL _running;
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    NSString *_deviceID;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    unsigned long long _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    double _retryTimeout;
    NSMutableSet *_peerSourceDeviceIDsWithCompletedHandshakes;
    BOOL _isAvailable;
}

@property (nonatomic) BOOL isAvailable; // @synthesize isAvailable=_isAvailable;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cancelOutstandingOperations;
- (id)client;
- (void)dealloc;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (id)init;
- (BOOL)isTransportActiveForPeer:(id)arg1;
- (id)myDeviceID;
- (id)name;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)setDeviceID:(id)arg1;
- (void)start;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (long long)transportType;

@end
