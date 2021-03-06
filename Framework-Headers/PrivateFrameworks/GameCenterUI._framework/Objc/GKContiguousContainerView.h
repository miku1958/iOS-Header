//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface GKContiguousContainerView : UIView
{
    BOOL _vertical;
    BOOL _applyOrthogonalConstraints;
    UIView *_baselineView;
    double _overlap;
    NSArray *_replaceableConstraints;
    struct UIEdgeInsets _insets;
}

@property (nonatomic) BOOL applyOrthogonalConstraints; // @synthesize applyOrthogonalConstraints=_applyOrthogonalConstraints;
@property (nonatomic) UIView *baselineView; // @synthesize baselineView=_baselineView;
@property (nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property (nonatomic) double overlap; // @synthesize overlap=_overlap;
@property (strong, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property (nonatomic) BOOL vertical; // @synthesize vertical=_vertical;

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(BOOL)arg3 applyOrthogonalConstraints:(BOOL)arg4;
- (void)_addContiguousSubviews:(id)arg1;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)replaceSubviews:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForBaselineLayout;

@end

