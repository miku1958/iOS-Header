//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFRoomItemProvider, HFStaticItemProvider;

@interface HUDashboardListItemManager : HFItemManager
{
    HFItem *_favoritesItem;
    HFStaticItemProvider *_favoritesItemProvider;
    HFRoomItemProvider *_roomItemProvider;
}

@property (strong, nonatomic) HFItem *favoritesItem; // @synthesize favoritesItem=_favoritesItem;
@property (strong, nonatomic) HFStaticItemProvider *favoritesItemProvider; // @synthesize favoritesItemProvider=_favoritesItemProvider;
@property (strong, nonatomic) HFRoomItemProvider *roomItemProvider; // @synthesize roomItemProvider=_roomItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;

@end

