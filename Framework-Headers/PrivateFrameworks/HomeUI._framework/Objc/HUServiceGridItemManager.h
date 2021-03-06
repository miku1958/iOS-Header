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
    CDUnknownBlockType _itemProvidersCreator;
    NSArray *_cachedSortedRoomIdentifiers;
    NSArray *_cachedSortedRooms;
}

@property (readonly, nonatomic) long long actionSetSectionIndex;
@property (strong, nonatomic) NSArray *cachedSortedRoomIdentifiers; // @synthesize cachedSortedRoomIdentifiers=_cachedSortedRoomIdentifiers;
@property (strong, nonatomic) NSArray *cachedSortedRooms; // @synthesize cachedSortedRooms=_cachedSortedRooms;
@property (copy, nonatomic) CDUnknownBlockType itemProvidersCreator; // @synthesize itemProvidersCreator=_itemProvidersCreator;
@property (nonatomic) BOOL shouldGroupByRoom; // @synthesize shouldGroupByRoom=_shouldGroupByRoom;
@property (nonatomic) BOOL shouldShowSectionHeaders; // @synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (CDUnknownBlockType)_roomComparator;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;
- (id)_sortedRooms;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 shouldShowSectionHeaders:(BOOL)arg3 itemProvidersCreator:(CDUnknownBlockType)arg4;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(BOOL)arg3 shouldShowSectionHeaders:(BOOL)arg4 itemProvidersCreator:(CDUnknownBlockType)arg5;

@end

