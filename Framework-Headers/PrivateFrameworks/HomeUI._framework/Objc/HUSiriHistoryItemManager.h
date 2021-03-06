//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, NSObject;
@protocol OS_dispatch_queue;

@interface HUSiriHistoryItemManager : HFItemManager
{
    NSObject<OS_dispatch_queue> *_queue;
    HFStaticItem *_deleteSiriHistoryItem;
}

@property (strong, nonatomic) HFStaticItem *deleteSiriHistoryItem; // @synthesize deleteSiriHistoryItem=_deleteSiriHistoryItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItemAtIndexPath:(id)arg1;
- (id)didUpdateItemAtIndexPath:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;

@end

