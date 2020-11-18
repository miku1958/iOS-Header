//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FMFUI/FMF3HiddenMapTrackingHandlerDelegate-Protocol.h>
#import <FMFUI/FMFMapOptionsViewControllerDelegate-Protocol.h>
#import <FMFUI/FMFMapViewDelegateInternalDelegate-Protocol.h>
#import <FMFUI/FMFNoLocationViewDelegate-Protocol.h>
#import <FMFUI/FMFSessionDelegateInternal-Protocol.h>

@class FMF3HiddenMapTrackingHandler, FMFMapOptionsViewController, FMFMapViewDelegateInternal, FMFNoLocationView, FMFRefreshBarButtonItem, FMFSession, FMFTitleView, MKMapView, MKUserTrackingBarButtonItem, NSSet, NSString, UIBarButtonItem, UIColor, UIImageView, UIToolbar, UIView;
@protocol FMFMapViewControllerDelegate;

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, FMF3HiddenMapTrackingHandlerDelegate, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate>
{
    BOOL _shouldZoomToFitNewLocations;
    BOOL _shouldZoomToFitMeAndLocations;
    BOOL _showFloatingMapLocationButton;
    BOOL _isMapCenteringDisabled;
    BOOL _isSimpleMap;
    BOOL _canShowNoLocation;
    BOOL __refreshingIsPaused;
    BOOL __blockDidReceiveAnimation;
    BOOL __isRenderingInitialMap;
    BOOL _viewWillAppearCalled;
    BOOL _alwaysShowAccuracy;
    BOOL _mapTypeLoaded;
    id<FMFMapViewControllerDelegate> _delegate;
    MKMapView *_mapView;
    UIColor *_annotationTintColor;
    FMFSession *_fmfSession;
    FMFMapViewDelegateInternal *_mapViewDelegate;
    NSSet *__preloadedHandles;
    FMFNoLocationView *_noLocationView;
    NSSet *__internalHandlesShowingLocations;
    FMFMapOptionsViewController *_mapOptionsVC;
    FMFTitleView *_titleView;
    void *_addressBook;
    UIToolbar *_toolbar;
    MKUserTrackingBarButtonItem *_userLocationButton;
    UIBarButtonItem *_directionsBarButtonItem;
    UIBarButtonItem *_infoBarButtonItem;
    FMF3HiddenMapTrackingHandler *_hiddenMap;
    UIToolbar *_floatingLocationToolbar;
    UIView *_floatingToolbarView;
    FMFRefreshBarButtonItem *_refreshButton;
    UIImageView *_cachedMapView;
    unsigned long long _defaultMapType;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) BOOL _blockDidReceiveAnimation; // @synthesize _blockDidReceiveAnimation=__blockDidReceiveAnimation;
@property (strong, nonatomic) NSSet *_internalHandlesShowingLocations; // @synthesize _internalHandlesShowingLocations=__internalHandlesShowingLocations;
@property (nonatomic) BOOL _isRenderingInitialMap; // @synthesize _isRenderingInitialMap=__isRenderingInitialMap;
@property (strong, nonatomic) NSSet *_preloadedHandles; // @synthesize _preloadedHandles=__preloadedHandles;
@property (nonatomic) BOOL _refreshingIsPaused; // @synthesize _refreshingIsPaused=__refreshingIsPaused;
@property (nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property (nonatomic) BOOL alwaysShowAccuracy; // @synthesize alwaysShowAccuracy=_alwaysShowAccuracy;
@property (copy, nonatomic) UIColor *annotationTintColor; // @synthesize annotationTintColor=_annotationTintColor;
@property (strong, nonatomic) UIImageView *cachedMapView; // @synthesize cachedMapView=_cachedMapView;
@property (nonatomic) BOOL canShowNoLocation; // @synthesize canShowNoLocation=_canShowNoLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long defaultMapType; // @synthesize defaultMapType=_defaultMapType;
@property (weak, nonatomic) id<FMFMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIBarButtonItem *directionsBarButtonItem; // @synthesize directionsBarButtonItem=_directionsBarButtonItem;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (strong, nonatomic) UIToolbar *floatingLocationToolbar; // @synthesize floatingLocationToolbar=_floatingLocationToolbar;
@property (strong, nonatomic) UIView *floatingToolbarView; // @synthesize floatingToolbarView=_floatingToolbarView;
@property (strong, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property (copy, nonatomic) NSSet *handlesShowingLocations;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FMF3HiddenMapTrackingHandler *hiddenMap; // @synthesize hiddenMap=_hiddenMap;
@property (strong, nonatomic) UIBarButtonItem *infoBarButtonItem; // @synthesize infoBarButtonItem=_infoBarButtonItem;
@property (nonatomic) BOOL isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
@property (nonatomic) BOOL isSimpleMap; // @synthesize isSimpleMap=_isSimpleMap;
@property (strong, nonatomic) FMFMapOptionsViewController *mapOptionsVC; // @synthesize mapOptionsVC=_mapOptionsVC;
@property (nonatomic) BOOL mapTypeLoaded; // @synthesize mapTypeLoaded=_mapTypeLoaded;
@property (strong, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property (strong, nonatomic) FMFMapViewDelegateInternal *mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property (strong, nonatomic) FMFNoLocationView *noLocationView; // @synthesize noLocationView=_noLocationView;
@property (strong, nonatomic) FMFRefreshBarButtonItem *refreshButton; // @synthesize refreshButton=_refreshButton;
@property (nonatomic) BOOL shouldZoomToFitMeAndLocations; // @synthesize shouldZoomToFitMeAndLocations=_shouldZoomToFitMeAndLocations;
@property (nonatomic) BOOL shouldZoomToFitNewLocations; // @synthesize shouldZoomToFitNewLocations=_shouldZoomToFitNewLocations;
@property (nonatomic) BOOL showFloatingMapLocationButton; // @synthesize showFloatingMapLocationButton=_showFloatingMapLocationButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) FMFTitleView *titleView; // @synthesize titleView=_titleView;
@property (strong, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property (strong, nonatomic) MKUserTrackingBarButtonItem *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property (nonatomic) BOOL viewWillAppearCalled; // @synthesize viewWillAppearCalled=_viewWillAppearCalled;

+ (struct CGSize)annotationImageSize;
- (void).cxx_destruct;
- (void)_authorizeMonitoringLocation;
- (void)_dismiss:(id)arg1;
- (id)_internalAnnotationTintColor;
- (id)_selectedHandleAnnotation;
- (void)_updateDirectionsButtonEnabled;
- (void)_updateLocationButtonEnabled;
- (void)_updateTitleViewLocation:(id)arg1;
- (void)addFloatingToolbar;
- (void)addHandlesToSession;
- (id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;
- (id)annotationImageForHandle:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)canSelectAnnotation:(id)arg1;
- (void)dealloc;
- (void)deselectAllAnnotations;
- (void)destroySession;
- (void)didDeselectLocation:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)didReceiveLocationForDelegateCallback:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didSelectLocation:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didUpdateUserLocation:(id)arg1;
- (void)enablePreloadedHandles;
- (void)getDirections;
- (void)hiddenMapTrackerDidUpdateMapToTrackingType:(long long)arg1;
- (void)hideCachedMap;
- (void)infoButtonTapped:(id)arg1;
- (id)init;
- (id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2;
- (id)initWithDelegate:(id)arg1 handles:(id)arg2;
- (void)initializeDefaults;
- (BOOL)isCompact;
- (void)loadCachedLocationsForHandles;
- (void)loadDelegate;
- (void)loadView;
- (id)locationOnMapForHandle:(id)arg1 enforceServerId:(BOOL)arg2;
- (BOOL)mapHasUserLocations;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (void)mapTypeChangedNotification:(id)arg1;
- (void)mapViewDidFinishRenderingMap;
- (id)openInAppURL;
- (void)openInMapsButtonTapped:(id)arg1;
- (void)presentMapOptionsModal:(id)arg1;
- (void)reZoomToFit;
- (void)refreshButtonTapped:(id)arg1;
- (void)regionDidChangeAnimated:(BOOL)arg1;
- (void)regionWillChangeAnimated:(BOOL)arg1;
- (void)removeAllFriendLocationsFromMap;
- (void)removeAnnotationsFromMapForHandle:(id)arg1;
- (void)removeHandlesFromSession;
- (void)resumeRefreshingLocations;
- (void)selectAnnotationIfSingleForMac;
- (void)selectAnnotationIfSingleFriend:(id)arg1;
- (BOOL)sessionContainsHandle:(id)arg1;
- (BOOL)singleAnnotationOnMap;
- (void)startShowingLocationsForHandles:(id)arg1;
- (void)stopRefreshingLocations;
- (void)stopShowingLocationsForHandles:(id)arg1;
- (id)titleViewForSelectedHandle;
- (void)updateAllAnnotationsDueToAddressBookUpdate;
- (void)updateMapWithNewLocation:(id)arg1 animated:(BOOL)arg2;
- (void)updateNoLocationView:(BOOL)arg1;
- (void)updateRefreshForLocation:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppearWillMoveToWindowSetup;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)zoomAndSelectHandle:(id)arg1;
- (void)zoomToFit;
- (void)zoomToFit:(BOOL)arg1;

@end

