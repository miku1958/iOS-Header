//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingService-Protocol.h>

@class BLTBulletinDistributorSubscriber, NSString;
@protocol BLTPingSubscribing;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService>
{
    id<BLTPingSubscribing> _delegate;
    BLTBulletinDistributorSubscriber *_subscriber;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BLTPingSubscribing> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) BLTBulletinDistributorSubscriber *subscriber; // @synthesize subscriber=_subscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 withAck:(BOOL)arg3;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)unsubscribeFromSectionID:(id)arg1;

@end

