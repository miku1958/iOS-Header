//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarBackgroundActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem
{
    _UIStatusBarBackgroundActivityView *_backgroundView;
}

@property (strong, nonatomic) _UIStatusBarBackgroundActivityView *backgroundView; // @synthesize backgroundView=_backgroundView;

+ (id)backgroundDisplayIdentifier;
+ (BOOL)shouldKeepIconVisibleForActivityType:(long long)arg1;
- (void).cxx_destruct;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)imageForUpdate:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (id)init;
- (id)viewForIdentifier:(id)arg1;

@end
