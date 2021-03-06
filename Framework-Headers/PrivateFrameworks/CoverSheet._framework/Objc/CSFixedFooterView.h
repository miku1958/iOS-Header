//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CSPageControl, CSShakableView, SBFPagedScrollView, SBUICallToActionLabel, SBUILegibilityLabel, UIView, _UILegibilitySettings;
@protocol SBUILegibility;

@interface CSFixedFooterView : CSCoverSheetViewBase
{
    _UILegibilitySettings *_legibilitySettings;
    CSShakableView *_callToActionShakeView;
    SBUICallToActionLabel *_callToActionLabel;
    SBUILegibilityLabel *_alternateCallToActionLabel;
    double _alternateCallToActionLabelOffset;
    UIView<SBUILegibility> *_statusTextView;
    CSPageControl *_pageControl;
    SBFPagedScrollView *_trackingScrollViewForPageControl;
}

@property (strong, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel; // @synthesize alternateCallToActionLabel=_alternateCallToActionLabel;
@property (nonatomic) double alternateCallToActionLabelOffset; // @synthesize alternateCallToActionLabelOffset=_alternateCallToActionLabelOffset;
@property (strong, nonatomic) SBUICallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property (readonly, nonatomic) CSShakableView *callToActionShakeView; // @synthesize callToActionShakeView=_callToActionShakeView;
@property (readonly, nonatomic) CSPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (strong, nonatomic) UIView<SBUILegibility> *statusTextView; // @synthesize statusTextView=_statusTextView;
@property (weak, nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl; // @synthesize trackingScrollViewForPageControl=_trackingScrollViewForPageControl;

- (void).cxx_destruct;
- (void)_addPageControl;
- (void)_addShakeView;
- (void)_layoutCallToActionView;
- (void)_layoutPageControl;
- (void)_layoutStatusTextView;
- (void)_updateViewsForLegibilitySettings;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)presentationRegions;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)updatePageControl;

@end

