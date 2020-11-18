//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperationBuilder : NSObject
{
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
    BRCAccountSession *_session;
    BRCSyncUpOperation *_op;
    BRCUserDefaults *_defaults;
}

@property (strong, nonatomic) BRCUserDefaults *defaults; // @synthesize defaults=_defaults;
@property (strong, nonatomic) BRCSyncUpOperation *op; // @synthesize op=_op;
@property (strong, nonatomic) BRCAccountSession *session; // @synthesize session=_session;

- (void).cxx_destruct;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addDeletionOfItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addItem:(id)arg1;
- (BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (float)fakeSyncForItem:(id)arg1 serverItem:(id)arg2 inZone:(id)arg3;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (id)init;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;

@end
