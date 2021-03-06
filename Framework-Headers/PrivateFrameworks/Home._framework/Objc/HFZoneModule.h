//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemModule.h>

#import <Home/HFHomeObserver-Protocol.h>

@class HFCurrentZonesItem, HFItem, HFStaticItemProvider, HFZoneItemProvider, HFZoneSuggestionItemProvider, HMRoom, NSSet, NSString;

@interface HFZoneModule : HFItemModule <HFHomeObserver>
{
    BOOL _expanded;
    NSSet *_itemProviders;
    HMRoom *_room;
    HFCurrentZonesItem *_currentZoneItem;
    HFItem *_createNewZoneItem;
    HFStaticItemProvider *_expandedItemProvider;
    HFStaticItemProvider *_createNewZoneItemProvider;
    HFStaticItemProvider *_currentZoneItemProvider;
    HFZoneItemProvider *_zoneItemProvider;
    HFZoneSuggestionItemProvider *_zoneSuggestionItemProvider;
}

@property (strong, nonatomic) HFItem *createNewZoneItem; // @synthesize createNewZoneItem=_createNewZoneItem;
@property (strong, nonatomic) HFStaticItemProvider *createNewZoneItemProvider; // @synthesize createNewZoneItemProvider=_createNewZoneItemProvider;
@property (readonly, nonatomic) HFCurrentZonesItem *currentZoneItem; // @synthesize currentZoneItem=_currentZoneItem;
@property (strong, nonatomic) HFStaticItemProvider *currentZoneItemProvider; // @synthesize currentZoneItemProvider=_currentZoneItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (strong, nonatomic) HFStaticItemProvider *expandedItemProvider; // @synthesize expandedItemProvider=_expandedItemProvider;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
@property (readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property (readonly) Class superclass;
@property (strong, nonatomic) HFZoneItemProvider *zoneItemProvider; // @synthesize zoneItemProvider=_zoneItemProvider;
@property (strong, nonatomic) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider; // @synthesize zoneSuggestionItemProvider=_zoneSuggestionItemProvider;

- (void).cxx_destruct;
- (void)_reloadItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (BOOL)canExpand;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 room:(id)arg2;
- (BOOL)toggleExpansion;

@end

