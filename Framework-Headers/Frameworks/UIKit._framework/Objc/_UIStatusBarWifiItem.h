//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem : _UIStatusBarItem
{
    _UIStatusBarWifiSignalView *_signalView;
    _UIStatusBarImageView *_networkIconView;
    _UIStatusBarStringView *_rawStringView;
}

@property (strong, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property (strong, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property (strong, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;

+ (id)groupWithPriority:(long long)arg1;
+ (id)iconDisplayIdentifier;
+ (id)rawDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
- (void).cxx_destruct;
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;
- (long long)_barCountForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (void)_create_networkIconView;
- (void)_create_rawStringView;
- (void)_create_signalView;
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_totalWidthForUpdate:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)arg1;

@end

