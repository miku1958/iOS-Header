//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UIButtonBarDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIBlurEffect, UIVisualEffectView, _UIButtonBar, _UIButtonBarButtonVisualProvider;

@interface _UIGroupedBar : UIView <_UIButtonBarDelegate>
{
    _UIButtonBar *_leftBar;
    _UIButtonBar *_centerBar;
    _UIButtonBar *_rightBar;
    UIVisualEffectView *_backgroundView;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_leadingLimitConstraint;
    NSLayoutConstraint *_trailingLimitConstraint;
    BOOL _independentGroupSizes;
    double _margin;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    double _leadingBarSizeLimit;
    double _trailingBarSizeLimit;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    UIBlurEffect *_backgroundEffect;
}

@property (copy, nonatomic) UIBlurEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property (copy, nonatomic) NSArray *centerBarButtonGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL independentGroupSizes; // @synthesize independentGroupSizes=_independentGroupSizes;
@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (nonatomic) double leadingBarSizeLimit; // @synthesize leadingBarSizeLimit=_leadingBarSizeLimit;
@property (nonatomic) double margin; // @synthesize margin=_margin;
@property (nonatomic) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;
@property (nonatomic) double trailingBarSizeLimit; // @synthesize trailingBarSizeLimit=_trailingBarSizeLimit;
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;

- (void).cxx_destruct;
- (id)_debug;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setButtonAlpha:(double)arg1;
- (void)_updateBarMargins;
- (void)_updateVisualProvider;
- (void)buttonBarWillUpdateLayout:(id)arg1;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)validateAllItems;

@end

