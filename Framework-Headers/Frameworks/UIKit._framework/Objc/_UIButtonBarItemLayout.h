//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIButtonBarLayout.h>

@class NSLayoutConstraint, UIBarButtonItem, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout : _UIButtonBarLayout
{
    UIBarButtonItem *_item;
    UIView *_itemView;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_maximumAlignmentSize;
    NSLayoutConstraint *_groupSameSize;
    NSLayoutConstraint *_popoverGuideLeading;
    NSLayoutConstraint *_popoverGuideTrailing;
    NSLayoutConstraint *_popoverGuideTop;
    NSLayoutConstraint *_popoverGuideHeight;
    BOOL _useGroupSizing;
    UILayoutGuide *_popoverLayoutGuide;
    CDUnknownBlockType _itemViewGenerator;
}

@property (copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property (readonly, nonatomic) UILayoutGuide *popoverLayoutGuide; // @synthesize popoverLayoutGuide=_popoverLayoutGuide;
@property (nonatomic) BOOL useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (id)_item;
- (BOOL)_shouldBeDirty;
- (void)_updateItemView;
- (id)description;
- (id)initWithLayoutMetrics:(id)arg1;
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;

@end
