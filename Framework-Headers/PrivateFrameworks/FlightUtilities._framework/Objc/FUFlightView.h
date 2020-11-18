//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FlightUtilities/FUFlightInfoViewProtocol-Protocol.h>
#import <FlightUtilities/UIPageViewControllerDataSource-Protocol.h>
#import <FlightUtilities/UIPageViewControllerDelegate-Protocol.h>

@class FUFLightTrack, FUPlaneTrackerAnnotationView, MKMapView, NSArray, NSMutableArray, NSString, UIPageControl, UIPageViewController, UIVisualEffectView;
@protocol FUFlightViewDelegate;

@interface FUFlightView : UIView <UIPageViewControllerDelegate, UIPageViewControllerDataSource, FUFlightInfoViewProtocol>
{
    FUPlaneTrackerAnnotationView *_planeTracker;
    long long _currentFlightIndex;
    NSMutableArray *_tracks;
    FUFLightTrack *_currentTrack;
    UIPageViewController *_pageViewController;
    BOOL _highlightCurrentFlightLeg;
    BOOL _showInfoPanel;
    long long _currentFocus;
    MKMapView *_mapView;
    UIVisualEffectView *_backBlurView;
    UIView *_borderLineViewLandscape;
    UIView *_borderLineViewPortrait;
    UIPageControl *_pageControl;
    UIView *_errorView;
    UIView *_loadingView;
    NSArray *_flights;
    id<FUFlightViewDelegate> _delegate;
    struct UIEdgeInsets _mapInsets;
}

@property (weak) UIVisualEffectView *backBlurView; // @synthesize backBlurView=_backBlurView;
@property (weak) UIView *borderLineViewLandscape; // @synthesize borderLineViewLandscape=_borderLineViewLandscape;
@property (weak) UIView *borderLineViewPortrait; // @synthesize borderLineViewPortrait=_borderLineViewPortrait;
@property long long currentFocus; // @synthesize currentFocus=_currentFocus;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<FUFlightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) UIView *errorView; // @synthesize errorView=_errorView;
@property (strong, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL highlightCurrentFlightLeg; // @synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg;
@property (strong) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property (nonatomic) struct UIEdgeInsets mapInsets; // @synthesize mapInsets=_mapInsets;
@property (weak) MKMapView *mapView; // @synthesize mapView=_mapView;
@property (weak) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (nonatomic) BOOL showInfoPanel; // @synthesize showInfoPanel=_showInfoPanel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshMapOverlay;
- (void)_updateToFocus:(long long)arg1 animated:(BOOL)arg2;
- (void)addTrack:(id)arg1;
- (id)arrivalCamera;
- (void)awakeFromNib;
- (void)changeCurrentPage:(id)arg1;
- (void)cleanupView;
- (id)currentFlight;
- (id)departureCamera;
- (void)fitMap:(BOOL)arg1;
- (id)flightCamera;
- (void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2;
- (void)layoutSubviews;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)setCurrentIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setupStyles;
- (void)showError;
- (void)showInfo;
- (void)showLoading;
- (void)updateMapArcs;
- (void)updateMapCamera;

@end

