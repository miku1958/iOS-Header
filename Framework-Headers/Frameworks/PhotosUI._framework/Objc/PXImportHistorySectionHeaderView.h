//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, PXCuratedLibraryOverlayButton, PXCuratedLibrarySectionHeaderLayoutSpec, UIButton, UIControl, UIImage, UIImageView, UILabel, UITraitCollection, UIVisualEffectView;
@protocol NSCopying, PXImportHistorySectionHeaderViewDelegate;

@interface PXImportHistorySectionHeaderView : UICollectionReusableView <PXGReusableView>
{
    struct {
        unsigned int headerViewDidPressActionButton:1;
    } _delegateFlags;
    BOOL _showsActionButton;
    BOOL _actionButtonEnabled;
    BOOL _wantsBackground;
    BOOL _supportsMultipleLinesInCompactLayout;
    BOOL _inLayoutTransition;
    id<PXImportHistorySectionHeaderViewDelegate> _delegate;
    unsigned long long _buttonStyle;
    NSString *_actionText;
    PXCuratedLibrarySectionHeaderLayoutSpec *_backdropButtonSpec;
    unsigned long long _backgroundStyle;
    UIImage *_backgroundImage;
    double _backgroundImageAlpha;
    double _backgroundImageOverhang;
    NSString *_backdropViewGroupName;
    UILabel *_primaryLabel;
    UILabel *_spacerLabel;
    UILabel *_secondaryLabel;
    UIButton *_systemActionButton;
    PXCuratedLibraryOverlayButton *_backdropActionButton;
    UIVisualEffectView *_visualEffectView;
    UIImageView *_backgroundImageView;
    UITraitCollection *_selfSizingTraits;
    struct PXSimpleIndexPath _sectionIndexPath;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) BOOL actionButtonEnabled; // @synthesize actionButtonEnabled=_actionButtonEnabled;
@property (copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property (strong, nonatomic) PXCuratedLibraryOverlayButton *backdropActionButton; // @synthesize backdropActionButton=_backdropActionButton;
@property (strong, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *backdropButtonSpec; // @synthesize backdropButtonSpec=_backdropButtonSpec;
@property (copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property (strong, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property (nonatomic) double backgroundImageAlpha; // @synthesize backgroundImageAlpha=_backgroundImageAlpha;
@property (nonatomic) double backgroundImageOverhang; // @synthesize backgroundImageOverhang=_backgroundImageOverhang;
@property (readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) double baselineToBottomSpacing;
@property (nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property (nonatomic) struct CGRect clippingRect;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (readonly, nonatomic) UIControl *currentActionButton;
@property (weak, nonatomic) id<PXImportHistorySectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL inLayoutTransition; // @synthesize inLayoutTransition=_inLayoutTransition;
@property (readonly, nonatomic) long long layoutMode;
@property (strong, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (copy, nonatomic) NSString *primaryText;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property (strong, nonatomic) UITraitCollection *selfSizingTraits; // @synthesize selfSizingTraits=_selfSizingTraits;
@property (nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property (strong, nonatomic) UILabel *spacerLabel; // @synthesize spacerLabel=_spacerLabel;
@property (nonatomic) BOOL supportsMultipleLinesInCompactLayout; // @synthesize supportsMultipleLinesInCompactLayout=_supportsMultipleLinesInCompactLayout;
@property (strong, nonatomic) UIButton *systemActionButton; // @synthesize systemActionButton=_systemActionButton;
@property (copy, nonatomic) id<NSCopying> userData;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property (nonatomic) BOOL wantsBackground; // @synthesize wantsBackground=_wantsBackground;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (BOOL)_disableRasterizeInAnimations;
- (void)_updateActionButton;
- (void)_updateActionButtonConfiguration;
- (void)_updateActionButtonEnabledAnimated:(BOOL)arg1;
- (void)_updateBackdropActionButton;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackgroundAnimated:(BOOL)arg1;
- (void)_updateLabelColors;
- (void)_updateLabelFonts;
- (void)_updateLabelLineNumbers;
- (void)_updateSpacerLabelHiddenState;
- (void)_updateSystemActionButton;
- (void)_updateWithCurrentTraits;
- (BOOL)_wantsActionButton;
- (void)applyLayoutAttributes:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (double)heightForSizeClass:(long long)arg1 width:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)layoutModeForHorizontalSizeClass:(long long)arg1;
- (void)layoutSubviews;
- (void)setActionButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setWantsBackground:(BOOL)arg1 animated:(BOOL)arg2;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
