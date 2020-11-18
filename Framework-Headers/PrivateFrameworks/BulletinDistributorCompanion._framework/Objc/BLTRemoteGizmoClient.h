//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTRemoteObject.h>

#import <BulletinDistributorCompanion/BLTBulletinSendQueueDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTGizmoClient-Protocol.h>

@class BLTBulletinSendQueue, NSString;
@protocol BLTCompanionServer;

@interface BLTRemoteGizmoClient : BLTRemoteObject <BLTBulletinSendQueueDelegate, BLTGizmoClient>
{
    BLTBulletinSendQueue *_bulletinSendQueue;
    id<BLTCompanionServer> _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<BLTCompanionServer> server; // @synthesize server=_server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSyncStateChanged:(id)arg1;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned long long)arg3 withTimeout:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addBulletinSummary:(id)arg1;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 withTimeout:(id)arg4;
- (void)dealloc;
- (void)handleAcknowledgeActionRequest:(id)arg1;
- (void)handleDidPlayLightsAndSirensReply:(id)arg1;
- (void)handleDismissActionRequest:(id)arg1;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;
- (void)handleHandlePairedDeviceIdentifierRequest:(id)arg1;
- (void)handlePairedDeviceIdentifier:(id)arg1;
- (void)handleRemoveBulletinRequest:(id)arg1;
- (void)handleShouldSuppressLightsAndSirensNowRequest:(id)arg1;
- (void)handleSnoozeActionRequest:(id)arg1;
- (void)handleSupplementaryActionRequest:(id)arg1;
- (id)init;
- (void)queuePendingRequests;
- (void)registerProtobufHandlers;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 withTimeout:(id)arg4;
- (void)updateBulletinList:(id)arg1;

@end

