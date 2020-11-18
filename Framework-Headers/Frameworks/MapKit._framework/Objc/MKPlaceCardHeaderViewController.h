//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKETAProviderObserver-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class MKPlaceSectionRowView, MKUGCCallToActionView, MKUGCCallToActionViewAppearance, NSArray, NSLayoutConstraint, NSString, NSURL, UIImageView, UILayoutGuide, UIView, _MKDataHeaderModel, _MKLocalizedHoursBuilder, _MKTokenAttributedString, _MKUILabel;
@protocol GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, MKUGCCallToActionViewDelegate, _MKPlaceItem;

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver>
{
    unsigned long long _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    UIImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    _MKUILabel *_thirdLabel;
    UIView *_thirdDisplayedLabel;
    NSArray *_constraints;
    UILayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_titleTrailingConstraint;
    MKUGCCallToActionView *_callToActionView;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    NSLayoutConstraint *_lastLabelToBottomConstraint;
    double _secondLabelToFirstLabelConstraintConstantMax;
    double _secondLabelToFirstLabelConstraintConstantMin;
    BOOL _isUserLocation;
    BOOL _optionSmallScreen;
    BOOL _constraintsCreated;
    BOOL _notVerified;
    double _lastMaskAlphaValueApplied;
    id<_MKPlaceItem> _placeItem;
    id<GEOTransitLineItem> _lineItem;
    double _contentAlpha;
    id<MKPlaceCardHeaderViewControllerDelegate> _delegate;
    MKUGCCallToActionViewAppearance *_callToActionAppearance;
    id<MKUGCCallToActionViewDelegate> _callToActionDelegate;
    _MKLocalizedHoursBuilder *_localizedHoursBuilder;
}

@property (strong, nonatomic) MKUGCCallToActionViewAppearance *callToActionAppearance; // @synthesize callToActionAppearance=_callToActionAppearance;
@property (weak, nonatomic) id<MKUGCCallToActionViewDelegate> callToActionDelegate; // @synthesize callToActionDelegate=_callToActionDelegate;
@property (nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKPlaceCardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double lastLabelToBottomConstant;
@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property (strong, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder; // @synthesize localizedHoursBuilder=_localizedHoursBuilder;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property (readonly, nonatomic) BOOL shouldShowCallToActionWithRatingHeaderInfo;
@property (readonly) Class superclass;

+ (double)minimalModeHeight;
- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (BOOL)_canShowWhileLocked;
- (void)_commonInit;
- (void)_contentSizeDidChange;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)_createViews;
- (id)_currentTitle;
- (BOOL)_hasSecondaryName;
- (BOOL)_isLikelyToShowDistance;
- (void)_loadLogo;
- (BOOL)_mapItemShouldDisplayDistance:(id)arg1;
- (id)_openStateString;
- (id)_reviewLabelText;
- (id)_secondaryNameTitle;
- (void)_setAlpha:(double)arg1 toView:(id)arg2 ifIntersects:(struct CGRect)arg3;
- (void)_setupDatas;
- (void)_upateContentAlpha;
- (id)_verifiedText;
- (void)animateSecondLabelWithPercentage:(double)arg1;
- (void)hideTitle:(BOOL)arg1;
- (void)infoCardThemeChanged;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)newLabel;
- (double)secondaryNameLabelPadding;
- (id)secondaryNameTimingFunction;
- (void)setConstraints;
- (id)titleFont;
- (void)updateContent;
- (void)updateHeaderTitle;
- (void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
- (void)updateViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
