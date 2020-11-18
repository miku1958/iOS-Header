//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>
#import <MapKit/MKQuickRouteConfigurableView-Protocol.h>
#import <MapKit/MKQuickRouteManagerDelegate-Protocol.h>
#import <MapKit/MKQuickRouteTransportTypeFinding-Protocol.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, MKMapItem, MKPlaceSectionRowView, MKTransitInfoLabelView, MNIdealTransportTypeFinder, NSAttributedString, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, UIButton, _MKPlaceActionButtonController, _MKPlaceCardHeaderMiddleSectionView, _MKQuickRouteManager, _MKUILabel;
@protocol GEOTransitLineItem, MKPlaceCardHeaderViewControllerDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver, MKStackingViewControllerFixedHeightAware, MKQuickRouteTransportTypeFinding, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    unsigned long long _options;
    NSMutableArray *_firstLineRichTextArray;
    NSMutableArray *_secondLineRichTextArray;
    NSMutableArray *_thirdLineRichTextArray;
    _MKQuickRouteManager *_quickRouteAmazingNess;
    MNIdealTransportTypeFinder *_transportTypeFinder;
    MKPlaceSectionRowView *_topContainerView;
    MKPlaceSectionRowView *_middleContainerView;
    MKPlaceSectionRowView *_bottomContainerView;
    NSMutableArray *_topContainerConstraints;
    NSMutableArray *_middleContainerConstraints;
    NSMutableArray *_bottomContainerConstraints;
    _MKPlaceCardHeaderMiddleSectionView *_firstLineForMidContainerView;
    _MKPlaceCardHeaderMiddleSectionView *_secondLineForMidContainerView;
    _MKPlaceCardHeaderMiddleSectionView *_thirdLineForMidContainerView;
    NSLayoutConstraint *_firstLineToTopConstraint;
    NSLayoutConstraint *_secondLineToFirstLineConstraint;
    NSLayoutConstraint *_thirdLineToSecondLineConstraint;
    NSLayoutConstraint *_bottomToThirdLineConstraint;
    NSAttributedString *_distanceTextItem;
    BOOL _distanceOrETAWasFound;
    CDUnknownBlockType _etaStringFormatterBlock;
    NSNumber *_lastTransportTypeFound;
    UIButton *_primaryButton;
    UIButton *_actionButton;
    NSLayoutConstraint *_primaryButtonHeightConstraint;
    NSLayoutConstraint *_actionButtonHeightConstraint;
    _MKUILabel *_titleLabel;
    _MKUILabel *_distanceLabel;
    _MKUILabel *_categoryLabel;
    _MKUILabel *_priceLabel;
    _MKUILabel *_openNowLabel;
    _MKUILabel *_reviewLabel;
    _MKUILabel *_hoursLabel;
    MKTransitInfoLabelView *_transitLabel;
    MKMapItem *_nearbyItem;
    NSLayoutConstraint *_titleTrailingConstraint;
    BOOL optionTitleHasOwnSection;
    BOOL optionSmallerScreen;
    BOOL _optionForceSmallButtonText;
    BOOL _resizableViewsDisabled;
    id<_MKPlaceItem> _placeItem;
    id<GEOTransitLineItem> _lineItem;
    unsigned long long _primaryButtonType;
    id<MKPlaceCardHeaderViewControllerDelegate> _delegate;
    _MKPlaceActionButtonController *_actionButtonController;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
}

@property (strong, nonatomic) _MKPlaceActionButtonController *actionButtonController; // @synthesize actionButtonController=_actionButtonController;
@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (nonatomic) double currentMinimalModeInterpolationFactor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKPlaceCardHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property (readonly, nonatomic) UIButton *primaryButton;
@property (nonatomic) unsigned long long primaryButtonType; // @synthesize primaryButtonType=_primaryButtonType;
@property (nonatomic) BOOL resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
@property (readonly) Class superclass;
@property (strong, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;

+ (double)minimalModeHeight;
- (void).cxx_destruct;
- (void)_actionSelected:(id)arg1;
- (id)_applyButtonDefaultConfiguration:(id)arg1 selector:(SEL)arg2;
- (BOOL)_areDistanceAndETAInformationAvailable;
- (id)_buttonFont;
- (void)_buttonStateChangedInSiri:(id)arg1;
- (void)_commonInit;
- (void)_configureETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3;
- (void)_configureETAForMapItem:(id)arg1;
- (void)_contentSizeDidChange;
- (id)_distanceLabelContainerView;
- (BOOL)_isSmallerScreen;
- (id)_primaryButtonColor;
- (void)_primaryButtonSelected:(id)arg1;
- (id)_primaryButtonTextColor;
- (id)_reviewLabelText;
- (void)_setPrimaryButtonTitle:(id)arg1;
- (void)_setUpComponents;
- (void)_setUpPrimaryButton;
- (BOOL)_shouldUpdateETAForMapView:(id)arg1;
- (void)_updateBaselineConstraints;
- (void)_updateDirectionsButton;
- (void)_updateETA;
- (void)_updateETAHandler:(id)arg1;
- (void)_updatePrimaryButton;
- (void)_updateRerouteButton;
- (void)_updateRidesharingButton;
- (void)_updateShareLocationButton;
- (BOOL)_willShowDistance;
- (void)configureWithNearbyMapItem:(id)arg1;
- (void)dealloc;
- (double)extraHeightToReserveInLayout;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)hideTitle:(BOOL)arg1;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithLineItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 placeHeaderOptions:(unsigned long long)arg2;
- (id)labelForAttributedString:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4;
- (BOOL)quickRouteShouldIncludeTransit;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (void)setUpBottomContainerConstraints;
- (void)setUpMiddleContainerConstaints;
- (void)setUpTopContainerConstraints;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (id)transportTypeFinder;
- (void)updateActionButton;
- (void)updateHeaderTitle;
- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

