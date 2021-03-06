//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class BRCClientZone, BRCLocalItem, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, PQLResultSet;
@protocol PQLEnumeration;

__attribute__((visibility("hidden")))
@interface BRCSyncUpEnumerator : NSEnumerator
{
    unsigned int _batchSize;
    unsigned int _maxDepth;
    unsigned int _should2PhasePCSChain;
    BRCClientZone *_clientZone;
    NSMutableSet *_whitelist;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    PQLResultSet<PQLEnumeration> *_enumerator;
    NSMutableArray *_stack;
    int _stage;
    unsigned long long _retryAfter;
    BRCLocalItem *_itemNeedingPCSChaining;
    NSMutableSet *_chainedParentIDWhitelist;
    NSMutableArray *_itemsNeedingUnshare;
}

@property (readonly, nonatomic) unsigned int batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, nonatomic) NSMutableSet *chainedParentIDWhitelist; // @synthesize chainedParentIDWhitelist=_chainedParentIDWhitelist;
@property (readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // @synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining;
@property (readonly, nonatomic) NSMutableArray *itemsNeedingUnshare; // @synthesize itemsNeedingUnshare=_itemsNeedingUnshare;
@property (readonly, nonatomic) unsigned long long retryAfter; // @synthesize retryAfter=_retryAfter;

- (void).cxx_destruct;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(CDUnknownBlockType)arg4;
- (BOOL)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2;
- (BOOL)_checkForSharesWithinSharesWithItem:(id)arg1;
- (BOOL)_checkIfParentNeedsRevivalWithParentItem:(id)arg1;
- (BOOL)_checkIfShouldBlacklistForPathMatch:(id)arg1;
- (BOOL)_checkIfShouldDedicateOpToPCSChainingItem:(id)arg1;
- (id)_documentsOrAliasesNeedingSyncUpEnumerator;
- (BOOL)_handlePendingShareItemWithPendingDeleteChildren:(id)arg1;
- (BOOL)_handleSharedItemWhichMovedToNewShare:(id)arg1 rootItem:(id)arg2;
- (id)_liveDirectoriesNeedingSyncUpEnumerator;
- (id)_nextLiveItem;
- (id)_nextTombstone;
- (id)_tombstoneLeavesNeedingSyncUpEnumerator;
- (BOOL)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2;
- (id)initWithClientZone:(id)arg1;
- (void)invalidate;
- (BOOL)isBlackListed:(id)arg1;
- (id)nextObject;

@end

