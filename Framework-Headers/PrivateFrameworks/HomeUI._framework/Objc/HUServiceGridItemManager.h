//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class NSArray;

@interface HUServiceGridItemManager : HFItemManager
{
    BOOL _shouldGroupByRoom;
    BOOL _shouldShowSectionHeaders;
    NSArray *_itemProviders;
    CDUnknownBlockType _itemProvidersCreator;
    NSArray *_cachedSortedRoomIdentifiers;
    NSArray *_cachedSortedRooms;
}

@property (readonly, nonatomic) long long actionSetSectionIndex;
@property (strong, nonatomic) NSArray *cachedSortedRoomIdentifiers; // @synthesize cachedSortedRoomIdentifiers=_cachedSortedRoomIdentifiers;
@property (strong, nonatomic) NSArray *cachedSortedRooms; // @synthesize cachedSortedRooms=_cachedSortedRooms;
@property (strong, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
@property (copy, nonatomic) CDUnknownBlockType itemProvidersCreator; // @synthesize itemProvidersCreator=_itemProvidersCreator;
@property (nonatomic) BOOL shouldGroupByRoom; // @synthesize shouldGroupByRoom=_shouldGroupByRoom;
@property (nonatomic) BOOL shouldShowSectionHeaders; // @synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders;

- (void).cxx_destruct;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemProviders;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (CDUnknownBlockType)_roomComparator;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;
- (id)_sortedRooms;
- (id)_styleForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(CDUnknownBlockType)arg4;

@end
