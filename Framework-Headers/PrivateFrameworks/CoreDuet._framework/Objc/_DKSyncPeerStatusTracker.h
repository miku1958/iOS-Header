//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncContextObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary, _DKKnowledgeStorage, _DKSyncPeer;

@interface _DKSyncPeerStatusTracker : _DKSyncContextObject
{
    NSMutableDictionary *_peerInfos;
    _DKSyncPeer *_pseudoPeer;
    NSMutableArray *_observers;
    NSMutableDictionary *_lastSuccessfulActivityDates;
    NSDate *_firstForeignPeersCountDate;
    _DKKnowledgeStorage *_storage;
}

@property (weak, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;

+ (id)peerStatusTrackerWithContext:(id)arg1;
+ (id)sharedInstance;
+ (id)stringForTransports:(long long)arg1;
- (void).cxx_destruct;
- (long long)activeTransportsForPeer:(id)arg1;
- (void)addActiveTransports:(long long)arg1 toPeer:(id)arg2;
- (id)addStatusChangeObserverWithBlock:(CDUnknownBlockType)arg1;
- (id)allPeers;
- (void)debugLogPeers;
- (id)description;
- (id)existingPeerWithIDSDeviceIdentifier:(id)arg1;
- (id)existingPeerWithSourceDeviceID:(id)arg1;
- (unsigned long long)foreignPeersCount;
- (id)initWithContext:(id)arg1;
- (BOOL)isSingleDevice;
- (id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2;
- (id)peerWithCompanionLinkDevice:(id)arg1;
- (id)peerWithIDSDeviceIdentifier:(id)arg1;
- (id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2;
- (id)peersWithActiveTransports:(long long)arg1;
- (id)peersWithAnyActiveTransports;
- (id)pseudoPeerForSyncTransportCloudUp;
- (void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2;
- (void)removePeer:(id)arg1;
- (void)removeStatusChangeObserver:(id)arg1;
- (void)setLastSeenDate:(id)arg1 onPeer:(id)arg2;
- (void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3;
- (void)setSourceDeviceID:(id)arg1 version:(id)arg2 peer:(id)arg3;

@end

