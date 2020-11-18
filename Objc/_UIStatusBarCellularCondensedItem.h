//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarCellularNetworkTypeView, _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem
{
    BOOL _reducesFontSize;
    _UIStatusBarDualCellularSignalView *_dualSignalView;
    _UIStatusBarMultilineStringView *_dualNameView;
    _UIStatusBarStringView *_dualSingleLineNameView;
    _UIStatusBarStringView *_dualSingleLineNameAndTypeView;
    _UIStatusBarCellularNetworkTypeView *_animatedNetworkTypeView;
}

@property (strong, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // @synthesize animatedNetworkTypeView=_animatedNetworkTypeView;
@property (strong, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property (strong, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
@property (strong, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // @synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView;
@property (strong, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // @synthesize dualSingleLineNameView=_dualSingleLineNameView;
@property (nonatomic) BOOL reducesFontSize; // @synthesize reducesFontSize=_reducesFontSize;

+ (id)animatedTypeDisplayIdentifier;
+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;
+ (id)dualSingleLineNameAndTypeDisplayIdentifier;
+ (id)dualSingleLineNameDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4;
- (void).cxx_destruct;
- (BOOL)_animateServiceType:(long long)arg1 prefixLength:(long long *)arg2 currentType:(long long)arg3;
- (void)_create_animatedNetworkTypeView;
- (void)_create_dualNameView;
- (void)_create_dualSignalView;
- (void)_create_dualSingleLineNameAndTypeView;
- (void)_create_dualSingleLineNameView;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;
- (struct _NSRange)_nonCondensedFontRangeForEntry:(id)arg1;
- (BOOL)_showCallFowardingForEntry:(id)arg1;
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;
- (id)_stringForCellularType:(long long)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;

@end

