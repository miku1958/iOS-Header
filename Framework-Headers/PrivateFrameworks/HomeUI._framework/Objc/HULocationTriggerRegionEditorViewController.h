//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFLocationManagerObserver-Protocol.h>
#import <HomeUI/HULocationTriggerEditorMapDragRadiusViewDelegate-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/MKMapViewDelegate-Protocol.h>
#import <HomeUI/MKMapViewDelegatePrivate-Protocol.h>
#import <HomeUI/UISearchBarDelegate-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class HMHome, HULocationTriggerEditorMapDragRadiusView, HULocationTriggerRegion, MKLocalSearch, MKMapView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UISearchBar, UITableView, UIView;
@protocol HULocationTriggerRegionEditorViewControllerDelegate;

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController>
{
    HULocationTriggerRegion *_region;
    HMHome *_home;
    id<HULocationTriggerRegionEditorViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UIView *_dividerView;
    UITableView *_tableView;
    MKMapView *_mapView;
    HULocationTriggerEditorMapDragRadiusView *_dragView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_constraints;
    NSLayoutConstraint *_mapHeightConstraint;
    NSArray *_recents;
    MKLocalSearch *_localSearch;
    NSArray *_localSearchResults;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HULocationTriggerRegionEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property (strong, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView; // @synthesize dragView=_dragView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property (strong, nonatomic) NSArray *localSearchResults; // @synthesize localSearchResults=_localSearchResults;
@property (strong, nonatomic) NSLayoutConstraint *mapHeightConstraint; // @synthesize mapHeightConstraint=_mapHeightConstraint;
@property (strong, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property (strong, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property (strong, nonatomic) HULocationTriggerRegion *region; // @synthesize region=_region;
@property (strong, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (strong, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)_homeImage;
+ (id)_pinImage;
- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_displayLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_done:(id)arg1;
- (long long)_firstLocalSearchResultRowIndex;
- (long long)_firstRecentRowIndex;
- (BOOL)_hasLocation;
- (long long)_homeRowIndex;
- (long long)_lastRecentRowIndex;
- (id)_locationForRecentMetadataDictionary:(id)arg1;
- (double)_mapHeight;
- (id)_overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (unsigned long long)_proximityType;
- (void)_reloadData;
- (void)_resetSearchResults;
- (void)_setupMap;
- (void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)_updateMapHeight;
- (void)_updateRecentsWithSearchText:(id)arg1;
- (void)_updateUI;
- (void)_updateUIWithRegion:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRegion:(id)arg1 home:(id)arg2 delegate:(id)arg3;
- (void)loadView;
- (CDStruct_02837cd9)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)showLocationRegionInvalidAlert;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

