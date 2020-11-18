//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPTemplate.h>

#import <CarPlay/CPBannerDelegate-Protocol.h>
#import <CarPlay/CPBarButtonProviding-Protocol.h>
#import <CarPlay/CPMapButtonDelegate-Protocol.h>
#import <CarPlay/CPMapClientTemplateDelegate-Protocol.h>
#import <CarPlay/CPNavigationAlertUpdating-Protocol.h>

@class CPBarButton, CPNavigationAlert, NAFuture, NSArray, NSMutableDictionary, NSString, UIColor;
@protocol CPBannerProviding, CPMapTemplateDelegate, CPNavigationSessionProviding;

@interface CPMapTemplate : CPTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding>
{
    BOOL _automaticallyHidesNavigationBar;
    BOOL _hidesButtonsWithNavigationBar;
    UIColor *_guidanceBackgroundColor;
    unsigned long long _tripEstimateStyle;
    NSArray *_mapButtons;
    id<CPMapTemplateDelegate> _mapDelegate;
    CPNavigationAlert *_currentNavigationAlert;
    NSMutableDictionary *_postedBannerObjects;
    NAFuture *_navigationSessionProviderFuture;
    id<CPBannerProviding> _bannerProvider;
    id<CPNavigationSessionProviding> _navigationSessionProvider;
    NSArray *_tripPreviews;
}

@property (nonatomic) BOOL automaticallyHidesNavigationBar; // @synthesize automaticallyHidesNavigationBar=_automaticallyHidesNavigationBar;
@property (strong, nonatomic) CPBarButton *backButton;
@property (strong, nonatomic) id<CPBannerProviding> bannerProvider; // @synthesize bannerProvider=_bannerProvider;
@property (readonly, nonatomic) CPNavigationAlert *currentNavigationAlert; // @synthesize currentNavigationAlert=_currentNavigationAlert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *guidanceBackgroundColor; // @synthesize guidanceBackgroundColor=_guidanceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesButtonsWithNavigationBar; // @synthesize hidesButtonsWithNavigationBar=_hidesButtonsWithNavigationBar;
@property (strong, nonatomic) NSArray *leadingNavigationBarButtons;
@property (strong, nonatomic) NSArray *mapButtons; // @synthesize mapButtons=_mapButtons;
@property (weak, nonatomic) id<CPMapTemplateDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property (strong, nonatomic) id<CPNavigationSessionProviding> navigationSessionProvider; // @synthesize navigationSessionProvider=_navigationSessionProvider;
@property (strong, nonatomic) NAFuture *navigationSessionProviderFuture; // @synthesize navigationSessionProviderFuture=_navigationSessionProviderFuture;
@property (readonly, nonatomic, getter=isPanningInterfaceVisible) BOOL panningInterfaceVisible;
@property (strong, nonatomic) NSMutableDictionary *postedBannerObjects; // @synthesize postedBannerObjects=_postedBannerObjects;
@property (readonly) Class superclass;
@property (strong, nonatomic) NAFuture *templateProviderFuture; // @dynamic templateProviderFuture;
@property (strong, nonatomic) NSArray *trailingNavigationBarButtons;
@property (nonatomic) unsigned long long tripEstimateStyle; // @synthesize tripEstimateStyle=_tripEstimateStyle;
@property (readonly, copy, nonatomic) NSArray *tripPreviews; // @synthesize tripPreviews=_tripPreviews;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)_displayStyleForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)_updateNavigationAlert:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)clientNavigationAlertDidAppear:(id)arg1;
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillAppear:(id)arg1;
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanGestureBegan;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint)arg1;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientTripAlreadyStartedException;
- (void)clientTripCanceledByExternalNavigation;
- (void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPanningInterfaceAnimated:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)hideTripPreviews;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)mapButton:(id)arg1 setFocusedImage:(id)arg2;
- (BOOL)mapButton:(id)arg1 setHidden:(BOOL)arg2;
- (BOOL)mapButton:(id)arg1 setImageSet:(id)arg2;
- (void)presentNavigationAlert:(id)arg1 animated:(BOOL)arg2;
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)showPanningInterfaceAnimated:(BOOL)arg1;
- (void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2;
- (void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2;
- (id)startNavigationSessionForTrip:(id)arg1;
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3;

@end
