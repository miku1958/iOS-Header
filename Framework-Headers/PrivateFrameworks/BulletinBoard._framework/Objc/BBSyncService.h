//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol BBSyncServiceDelegate, OS_dispatch_queue;

@interface BBSyncService : NSObject <IDSServiceDelegate>
{
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    NSMutableDictionary *_deferredDismissalsBySectionID;
    NSTimer *_deferredTimer;
    int _lockNotifyToken;
    id<BBSyncServiceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BBSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDeferredDismissalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)_clearDeferredTimer;
- (void)_deferredTimerFired:(id)arg1;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (BOOL)_hasDestination;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)_sendDeferredDismissals;
- (void)_sendSyncMessage:(id)arg1;
- (id)_syncAccount;
- (BOOL)_syncHasDefaultPairedDevice;
- (id)_syncLocalDevices;
- (void)dealloc;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)sendDeferredDismissals;
- (void)sendPendingSyncedRemovals;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;

@end

