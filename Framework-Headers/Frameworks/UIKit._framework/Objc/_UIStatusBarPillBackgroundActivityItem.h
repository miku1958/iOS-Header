//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem
{
    long long _previousType;
    _UIStatusBarPillView *_combinedView;
    struct CGSize _pillSize;
}

@property (strong, nonatomic) _UIStatusBarPillView *combinedView; // @synthesize combinedView=_combinedView;
@property (nonatomic) struct CGSize pillSize; // @synthesize pillSize=_pillSize;
@property (nonatomic) long long previousType; // @synthesize previousType=_previousType;

+ (BOOL)_identifierContainsItemImage:(id)arg1;
+ (id)pillCombinedDisplayIdentifier;
+ (BOOL)shouldKeepIconVisibleForActivityType:(long long)arg1;
- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (void)_create_combinedView;
- (BOOL)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;
- (id)_textLabelForActivityType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end

