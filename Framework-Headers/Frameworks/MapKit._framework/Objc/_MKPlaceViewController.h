//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKStackingViewController.h>

#import <MapKit/ABContactViewControllerDelegate-Protocol.h>
#import <MapKit/ABNewPersonViewControllerDelegate-Protocol.h>
#import <MapKit/ABPeoplePickerNavigationControllerDelegate-Protocol.h>
#import <MapKit/CNContactViewControllerDelegate-Protocol.h>
#import <MapKit/GEOLogContextDelegate-Protocol.h>
#import <MapKit/MKActivityViewControllerDelegate-Protocol.h>
#import <MapKit/MKOfficialAppViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardActionControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardEncyclopedicControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardHeaderViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardPhotosControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceCardReviewsControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceDealsViewControllerDelegate-Protocol.h>
#import <MapKit/MKPlaceInfoViewControllerDelegate-Protocol.h>
#import <MapKit/MKStackingViewControllerDelegate-Protocol.h>
#import <MapKit/MKTransitAttributionViewControllerDelegate-Protocol.h>
#import <MapKit/MKTransitDepaturesViewControllerDelegate-Protocol.h>
#import <MapKit/RadiosPreferencesDelegate-Protocol.h>
#import <MapKit/_MKInfoCardAnaylticsDelegate-Protocol.h>
#import <MapKit/_MKInfoCardController-Protocol.h>

@class CNContact, CNContactNavigationController, GEOAutomobileOptions, GEORouteGenerator, GEOTransitOptions, MKInfoCardLoadingView, MKMapItem, MKMapItemMetadataDealRequest, MKOfficialAppViewController, MKPlaceCardActionItem, MKPlaceCardActionsViewController, MKPlaceCardHeaderViewController, MKPlaceDealsViewController, MKPlaceInfoViewController, MKPlaceInlineMapViewController, MKPlaceTransitViewController, NSMapTable, NSMutableArray, NSString, NSUserActivity, RadiosPreferences, _MKDistanceDetailProvider, _MKPlaceActionButtonController;
@protocol ABContactViewControllerDelegate, UIScrollViewDelegate, _MKPlaceItem, _MKPlaceViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, RadiosPreferencesDelegate, CNContactViewControllerDelegate, MKOfficialAppViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKTransitDepaturesViewControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKPlaceDealsViewControllerDelegate, _MKInfoCardAnaylticsDelegate, MKTransitAttributionViewControllerDelegate, GEOLogContextDelegate, _MKInfoCardController>
{
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceDealsViewController *_dealsViewController;
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlaceCardActionsViewController *_placeActionViewController;
    NSMutableArray *_placeActionItemsArray;
    MKPlaceCardActionItem *_addToFavoriteItem;
    MKPlaceCardActionItem *_removeFromFavoriteItem;
    MKPlaceCardActionItem *_removeFromSuggestedFavoriteItem;
    MKPlaceTransitViewController *_transitViewController;
    BOOL _attemptedToCreateAddressBook;
    MKOfficialAppViewController *_officialAppViewController;
    MKInfoCardLoadingView *_loadingView;
    void *_addressBook;
    void *_originalContactRecordCopy;
    NSMapTable *_additionalViewControllers;
    BOOL _overrideDefaultShowRAP;
    BOOL _hasContactOnlyMapItem;
    MKMapItemMetadataDealRequest *_dealRequest;
    BOOL _isUpdatingViewControllers;
    struct CGPoint _beginAnalyticsScrollingPoint;
    NSUserActivity *_donationUserActivity;
    BOOL _hasCheckedDistanceAvailability;
    BOOL _placeInBookmarks;
    BOOL _showContactActions;
    BOOL _isMapItemUpdating;
    BOOL _inAirplaneModeAndNetworkUnreachable;
    NSString *_headerTitle;
    GEORouteGenerator *_routeGenerator;
    _MKDistanceDetailProvider *_distanceMonitor;
    id<_MKPlaceItem> _placeItem;
    CNContact *_contact;
    CNContact *_originalContact;
    id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
    id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
    CDUnknownBlockType _placeViewFeedbackAppLaunchHandler;
    unsigned long long _options;
    double headerHeight;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    CNContactNavigationController<ABContactViewControllerDelegate> *_contactsNavigationController;
    RadiosPreferences *_radioPreferences;
    id<UIScrollViewDelegate> _scrollViewDelegate;
    _MKPlaceActionButtonController *_headerActionButtonController;
    NSMutableArray *_viewDidAppearBlocks;
}

@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (weak, nonatomic) CNContactNavigationController<ABContactViewControllerDelegate> *contactsNavigationController; // @synthesize contactsNavigationController=_contactsNavigationController;
@property (nonatomic) double currentHeaderMinimalModeInterpolationFactor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableReportAProblem;
@property (strong, nonatomic) _MKDistanceDetailProvider *distanceMonitor; // @synthesize distanceMonitor=_distanceMonitor;
@property (nonatomic) BOOL hasCheckedDistanceAvailability; // @synthesize hasCheckedDistanceAvailability=_hasCheckedDistanceAvailability;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _MKPlaceActionButtonController *headerActionButtonController; // @synthesize headerActionButtonController=_headerActionButtonController;
@property (nonatomic) double headerHeight; // @synthesize headerHeight;
@property (copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (nonatomic) BOOL hideDirectionsButtons;
@property (nonatomic) BOOL hideInlineMap;
@property (nonatomic) BOOL inAirplaneModeAndNetworkUnreachable; // @synthesize inAirplaneModeAndNetworkUnreachable=_inAirplaneModeAndNetworkUnreachable;
@property (nonatomic) BOOL isMapItemUpdating; // @synthesize isMapItemUpdating=_isMapItemUpdating;
@property (strong, nonatomic) MKMapItem *mapItem;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) CNContact *originalContact; // @synthesize originalContact=_originalContact;
@property (nonatomic) BOOL placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property (weak, nonatomic) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property (copy, nonatomic) CDUnknownBlockType placeViewFeedbackAppLaunchHandler; // @synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler;
@property (weak, nonatomic) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate; // @synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate;
@property (strong, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property (strong, nonatomic) GEORouteGenerator *routeGenerator; // @synthesize routeGenerator=_routeGenerator;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property (nonatomic) BOOL showContactActions; // @synthesize showContactActions=_showContactActions;
@property (nonatomic) BOOL showEditButton;
@property (nonatomic) BOOL showInlineMapInHeader;
@property (nonatomic) BOOL showNearbyApps;
@property (nonatomic) BOOL showOpenInPinpoint;
@property (nonatomic) BOOL showOpenInSkyline;
@property (nonatomic) BOOL showReportAProblem;
@property (nonatomic) BOOL showShareActionsButton;
@property (nonatomic) BOOL showSimulateLocation;
@property (nonatomic) BOOL showTitleBar;
@property (readonly) Class superclass;
@property (strong, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property (strong, nonatomic) NSMutableArray *viewDidAppearBlocks; // @synthesize viewDidAppearBlocks=_viewDidAppearBlocks;

+ (double)headerHeightInMinimalMode;
- (void).cxx_destruct;
- (void *)_addressBook;
- (BOOL)_canShowExtensionReservationButton;
- (void)_checkDeviceLockStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_checkForDealsIfNecessary;
- (void)_commonInit;
- (id)_contactForEditOperations;
- (id)_createTableBookingButtonController;
- (void)_createViewControllers:(id)arg1;
- (void)_didResolveAttribution:(id)arg1;
- (void)_dismissModalViewController;
- (void)_launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 mapItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (void)_openInfoAttribtion;
- (void)_performWhenViewHasAppeared:(CDUnknownBlockType)arg1;
- (void *)_recordForContact:(id)arg1;
- (BOOL)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (void)_setDeal:(id)arg1 forYelpId:(id)arg2;
- (void)_setDefaultViewControllers:(id)arg1;
- (BOOL)_shouldShowSiriReservationController;
- (void)_showEditSheet:(id)arg1;
- (BOOL)_showReportAProblem;
- (void)_showShareSheet:(id)arg1;
- (void)_showShareSheetNoDeviceLockCheck:(id)arg1;
- (void)_updateViewControllerStatesForOffline;
- (void)_updateViewControllers;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (void)airplaneModeChanged;
- (BOOL)allowTransitLineSelection;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)dealloc;
- (void)dealsViewController:(id)arg1 didSelectDeal:(id)arg2;
- (void)errorLoadingMapItemUpdate:(id)arg1;
- (id)generateAvailableActionForAnalytics;
- (id)generateUnactionableUIElementsForAnalytics;
- (unsigned long long)getPlaceCardAGGDType;
- (int)getPlaceCardTypeForAnalytics;
- (void)hideTitle:(BOOL)arg1;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (void)infoViewController:(id)arg1 didSelectShareFromView:(id)arg2;
- (id)init;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2;
- (id)logContextForLogMsgEvent:(id)arg1;
- (void)mapItemWillUpdate;
- (int)mapTypeForPlaceCardHeaderViewController:(id)arg1;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)networkReachableChanged:(id)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (void)officialAppViewControllerDidFinishLoading:(id)arg1 error:(id)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)placeCardActionControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
- (void)placeCardEncyclopedicControllerDidExpandTextBlock:(id)arg1;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReview:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardWillCloseFromClientType:(unsigned long long)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectDirectionsButton:(id)arg1 withTransportTypePreference:(id)arg2;
- (void)placeCardheaderHeaderViewControllerDidSelectRerouteButton:(id)arg1;
- (void)placeCardheaderHeaderViewControllerDidSelectShareLocationButton:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)removeAdditionalViewController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setAllowTransitLineSelection:(BOOL)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3;
- (void)setPlaceItem:(id)arg1;
- (void)setPlaceItem:(id)arg1 updateOriginalContact:(BOOL)arg2;
- (void)setShowFavoriteButtons:(BOOL)arg1;
- (void)setUseCompactPhotosView:(BOOL)arg1;
- (BOOL)showFavoriteButtons;
- (void)stackingViewController:(id)arg1 didLayoutViewControllers:(id)arg2 remaningViewControllers:(id)arg3;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)transitDeparturesViewController:(id)arg1 didSelectConnectionInformation:(id)arg2;
- (void)transitDeparturesViewController:(id)arg1 didSelectTransitLine:(id)arg2 fromCell:(id)arg3;
- (void)transitDeparturesViewController:(id)arg1 showIncidents:(id)arg2;
- (void)updateAirplaneModeNetworkUnreachable;
- (void)updateHeaderTitle;
- (BOOL)useCompactPhotosView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
