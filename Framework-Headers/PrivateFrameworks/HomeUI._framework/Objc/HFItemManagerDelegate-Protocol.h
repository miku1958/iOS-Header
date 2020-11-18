//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HFItemManager, NSDictionary, NSIndexPath, NSIndexSet, NSSet;

@protocol HFItemManagerDelegate <NSObject>

@optional
- (void)itemManager:(HFItemManager *)arg1 didChangeOverallLoadingState:(unsigned long long)arg2;
- (void)itemManager:(HFItemManager *)arg1 didChangeSourceItem:(HFItem *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didInsertItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didInsertSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didMoveItem:(HFItem *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)itemManager:(HFItemManager *)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)itemManager:(HFItemManager *)arg1 didRemoveItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didRemoveSections:(NSIndexSet *)arg2;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForItem:(HFItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)itemManager:(HFItemManager *)arg1 didUpdateResultsForSourceItem:(HFItem *)arg2;
- (BOOL)itemManager:(HFItemManager *)arg1 performBatchUpdateBlock:(void (^)(void))arg2;
- (BOOL)itemManager:(HFItemManager *)arg1 shouldUpdateItems:(NSSet *)arg2 itemUpdateOptions:(NSDictionary *)arg3;
@end

