//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCItemID, BRCServerZone, CKRecord, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldFetchSharingIdentity:(BOOL)arg1;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 recordsToLearnCKInfo:(id)arg2;
- (id)createActivity;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (oneway void)invalidate;
- (void)main;
- (void)performAfterPreparingSharingIdentityIfNecessary:(CDUnknownBlockType)arg1;

@end

