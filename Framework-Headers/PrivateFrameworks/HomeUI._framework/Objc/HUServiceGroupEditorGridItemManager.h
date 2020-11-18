//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFServiceGroupBuilder, NSSet;

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager
{
    HFServiceGroupBuilder *_serviceGroupBuilder;
    NSSet *_prioritizedRooms;
}

@property (strong, nonatomic) NSSet *prioritizedRooms; // @synthesize prioritizedRooms=_prioritizedRooms;
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // @synthesize serviceGroupBuilder=_serviceGroupBuilder;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (CDUnknownBlockType)_roomComparator;
- (BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(BOOL)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;
- (id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2;

@end
