//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PXCMMPosterBannerView, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, PXUpdater, PXViewLayoutHelper, UIActivityIndicatorView, UIColor;

@interface PXCMMPosterView : UIView
{
    struct _NSRange _bannerHeadlineBoldRange;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    PXCMMPosterBannerView *_bannerView;
    long long _actionButtonType;
    CDUnknownBlockType _actionButtonAction;
    UIActivityIndicatorView *_activityIndicatorView;
    PXViewLayoutHelper *_layoutHelper;
    PXUpdater *_updater;
    BOOL _needsBannerView;
    BOOL _actionInProgress;
    NSString *_bannerHeadline;
    NSString *_bannerSubheadline;
    UIColor *_opaqueAncestorBackgroundColor;
    unsigned long long _cornersToRound;
    double _cornerRadius;
    PXCMMPosterHeaderView *_headerView;
    long long _selectedCount;
    long long _totalCount;
}

@property (nonatomic, getter=isActionInProgress) BOOL actionInProgress; // @synthesize actionInProgress=_actionInProgress;
@property (copy, nonatomic) NSString *bannerHeadline; // @synthesize bannerHeadline=_bannerHeadline;
@property (copy, nonatomic) NSString *bannerSubheadline; // @synthesize bannerSubheadline=_bannerSubheadline;
@property (readonly, nonatomic) PXCMMPosterBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) unsigned long long cornersToRound; // @synthesize cornersToRound=_cornersToRound;
@property (copy, nonatomic) NSString *dateString;
@property (readonly, nonatomic) PXCMMPosterHeaderView *headerView; // @synthesize headerView=_headerView;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) BOOL needsBannerView; // @synthesize needsBannerView=_needsBannerView;
@property (copy, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property (nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property (copy, nonatomic) NSString *statusString;
@property (nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;

- (void).cxx_destruct;
- (id)_fontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_updateBannerActionButton;
- (void)_updateBannerTitles;
- (void)_updateBannerView;
- (void)_updateCorners;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActionButtonWithType:(long long)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)setBannerHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

