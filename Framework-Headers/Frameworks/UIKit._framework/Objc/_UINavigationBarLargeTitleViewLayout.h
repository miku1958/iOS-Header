//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UILabel, UIView, _UINavigationBarLargeTitleView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleViewLayout : NSObject
{
    NSMutableDictionary *_titleHeightCache;
    NSMutableDictionary *_restingHeightCache;
    double _cachedRestingHeight;
    BOOL _alignAccessoryViewToTitleBaseline;
    BOOL _providesExtraSpaceForExcessiveLineHeights;
    _UINavigationBarLargeTitleView *_contentView;
    long long _titleType;
    UILabel *_titleLabel;
    unsigned long long _twoLineMode;
    double _titleRestingHeight;
    UIView *_accessoryView;
    unsigned long long _accessoryViewHorizontalAlignment;
    struct NSDirectionalEdgeInsets _layoutMargins;
}

@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment; // @synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment;
@property (nonatomic) BOOL alignAccessoryViewToTitleBaseline; // @synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline;
@property (readonly, nonatomic) _UINavigationBarLargeTitleView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) struct NSDirectionalEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property (nonatomic) BOOL providesExtraSpaceForExcessiveLineHeights; // @synthesize providesExtraSpaceForExcessiveLineHeights=_providesExtraSpaceForExcessiveLineHeights;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic) double titleRestingHeight; // @synthesize titleRestingHeight=_titleRestingHeight;
@property (nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property (nonatomic) unsigned long long twoLineMode; // @synthesize twoLineMode=_twoLineMode;

- (void).cxx_destruct;
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1;
- (struct CGSize)_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1;
- (struct CGRect)_contentLayoutBounds;
- (struct CGRect)_contentLayoutBoundsUsingRestingTitleHeight:(BOOL)arg1;
- (void)_enforceLayoutOrdering;
- (void)_invalidateTitleHeightCache;
- (double)_textHeightForSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (void)cleanupAfterLayoutTransitionCompleted;
- (id)description;
- (id)initWithContentView:(id)arg1;
- (void)layoutViews;
- (void)layoutViewsWithOffset:(struct UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2;
- (void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset)arg1 useRestingTitleHeight:(BOOL)arg2;
- (void)removeContent;
- (void)setContentAlpha:(double)arg1;
- (void)setContentHidden:(BOOL)arg1;
- (struct CGSize)sizeFittingSize:(struct CGSize)arg1 titleType:(long long)arg2;
- (void)updateRestingTitleHeight;

@end
