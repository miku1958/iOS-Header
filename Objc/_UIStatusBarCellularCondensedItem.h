//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem
{
    _UIStatusBarDualCellularSignalView *_dualSignalView;
    _UIStatusBarMultilineStringView *_dualNameView;
}

@property (strong, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property (strong, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;

+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;
- (void).cxx_destruct;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end

