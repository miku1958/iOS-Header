//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, NSSet;

@interface HUFirmwareUpdateItemProvider : HFItemProvider
{
    BOOL _hasProvidedInstructionsItem;
    HMHome *_home;
    CDUnknownBlockType _filter;
    unsigned long long _style;
    HUInstructionsItem *_instructionsItem;
    NSSet *_linkedApplicationItems;
    HFItemProvider *_linkedApplicationItemProvider;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (nonatomic) BOOL hasProvidedInstructionsItem; // @synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property (strong, nonatomic) HFItemProvider *linkedApplicationItemProvider; // @synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider;
@property (strong, nonatomic) NSSet *linkedApplicationItems; // @synthesize linkedApplicationItems=_linkedApplicationItems;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;

+ (CDUnknownBlockType)itemComparator;
+ (BOOL)prefersNonBlockingReloads;
- (void).cxx_destruct;
- (CDUnknownBlockType)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2;
- (id)_localizedDescriptionForAppName:(id)arg1 accessoriesWithFirmwareUpdates:(id)arg2 visibleAccessoryTileDisplayNames:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 style:(unsigned long long)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end
