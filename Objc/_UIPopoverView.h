//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActionSheet, UIColor, UIImageView, UIPopoverBackgroundView, UIPopoverController;

__attribute__((visibility("hidden")))
@interface _UIPopoverView : UIView
{
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
    BOOL _showsBackgroundComponentHighlights;
    BOOL _showsBackgroundViewHighlight;
    BOOL _showsContentViewHighlight;
    UIActionSheet *_presentedActionSheet;
    UIPopoverController *_popoverController;
    double __dimmingViewTopEdgeInset;
}

@property (nonatomic, setter=_setDimmingViewTopEdgeInset:) double _dimmingViewTopEdgeInset; // @synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property (strong, nonatomic) UIActionSheet *presentedActionSheet; // @synthesize presentedActionSheet=_presentedActionSheet;
@property (nonatomic) BOOL showsBackgroundComponentHighlights; // @synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights;
@property (nonatomic) BOOL showsBackgroundViewHighlight; // @synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight;
@property (nonatomic) BOOL showsContentViewHighlight; // @synthesize showsContentViewHighlight=_showsContentViewHighlight;

+ (id)popoverViewContainingView:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_allowsCustomizationOfContent;
- (void)_hideArrow;
- (BOOL)_isIgnoringTapsInDimmingView;
- (void)_layoutToolbarShine;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (void)_presentationInPopoverDidBeginForViewController:(id)arg1;
- (void)_presentationInPopoverDidEndForViewController:(id)arg1;
- (void)_presentationInPopoverWillBeginForViewController:(id)arg1;
- (void)_presentationInPopoverWillEndForViewController:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;
- (void)_setIgnoreTapsInDimmingView:(BOOL)arg1;
- (void)_setPopoverContentView:(id)arg1;
- (void)_showArrow;
- (struct CGRect)_snapshotBounds;
- (int)_style;
- (id)_viewForModalPresentationOfViewController:(id)arg1;
- (id)backgroundView;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setUseToolbarShine:(BOOL)arg1;
- (id)standardChromeView;
- (BOOL)toolbarIsVisible;
- (id)toolbarShine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewController;
- (void)willMoveToWindow:(id)arg1;

@end
