//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFRoomBuilder, HFStaticItem, HFStaticItemProvider;

@interface HUEditRoomItemManager : HFItemManager
{
    HFStaticItem *_nameItem;
    HFStaticItem *_cameraItem;
    HFStaticItem *_chooseWallpaperItem;
    HFStaticItem *_wallpaperThumbnailItem;
    HFStaticItem *_removeItem;
    HFStaticItemProvider *_staticItemProvider;
    HFRoomBuilder *_roomBuilder;
}

@property (strong, nonatomic) HFStaticItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property (strong, nonatomic) HFStaticItem *chooseWallpaperItem; // @synthesize chooseWallpaperItem=_chooseWallpaperItem;
@property (strong, nonatomic) HFStaticItem *nameItem; // @synthesize nameItem=_nameItem;
@property (strong, nonatomic) HFStaticItem *removeItem; // @synthesize removeItem=_removeItem;
@property (strong, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property (strong, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property (strong, nonatomic) HFStaticItem *wallpaperThumbnailItem; // @synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem;

- (void).cxx_destruct;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemProviders;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_styleForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2;

@end
