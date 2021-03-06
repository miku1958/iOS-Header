//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <VideosUI/UISplitViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIFamilyMembersViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIFamilySharingContentProtocol-Protocol.h>
#import <VideosUI/VUIHomeShareViewControllerDelegate-Protocol.h>
#import <VideosUI/VUILibraryGridCollectionViewControllerDelegate-Protocol.h>
#import <VideosUI/VUIMenuCollectionViewControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UINavigationController, UIViewController, VUIFamilyMember, VUILibraryAlertView, VUILibraryMenuDataSource, VUIMediaLibrary, VUIMenuCollectionViewController, VUIMenuDataSource;
@protocol VUILibrarySplitViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibrarySplitViewController : UISplitViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol>
{
    BOOL _hasLoaded;
    VUIFamilyMember *_familyMember;
    id<VUILibrarySplitViewControllerDelegate> _librarySplitViewControllerDelegate;
    VUIMenuCollectionViewController *_menuViewController;
    VUIMediaLibrary *_mediaLibrary;
    UINavigationController *_masterNavigationController;
    UINavigationController *_detailNavigationController;
    VUILibraryMenuDataSource *_menuDataSource;
    UIViewController *_detailViewController;
    VUILibraryAlertView *_alertView;
    VUIMediaLibrary *_currentHomeShareMediaLibrary;
    NSMutableDictionary *_entitiesDataSourceForMenuItem;
    VUIMenuDataSource *_categories;
}

@property (strong, nonatomic) VUILibraryAlertView *alertView; // @synthesize alertView=_alertView;
@property (strong, nonatomic) VUIMenuDataSource *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary; // @synthesize currentHomeShareMediaLibrary=_currentHomeShareMediaLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UINavigationController *detailNavigationController; // @synthesize detailNavigationController=_detailNavigationController;
@property (strong, nonatomic) UIViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property (strong, nonatomic) NSMutableDictionary *entitiesDataSourceForMenuItem; // @synthesize entitiesDataSourceForMenuItem=_entitiesDataSourceForMenuItem;
@property (strong, nonatomic) VUIFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property (nonatomic) BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<VUILibrarySplitViewControllerDelegate> librarySplitViewControllerDelegate; // @synthesize librarySplitViewControllerDelegate=_librarySplitViewControllerDelegate;
@property (strong, nonatomic) UINavigationController *masterNavigationController; // @synthesize masterNavigationController=_masterNavigationController;
@property (strong, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (strong, nonatomic) VUILibraryMenuDataSource *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
@property (strong, nonatomic) VUIMenuCollectionViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (id)_downloadViewController;
- (id)_entitiesDataSourceForCategoryType:(long long)arg1;
- (id)_entitiesDataSourceForGenre:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (BOOL)_menuDataSourceHasContent;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_setDisplayModeForLayoutType:(long long)arg1;
- (BOOL)_shouldLeftBarButton;
- (id)_viewControllerForIndexPath:(id)arg1;
- (void)categoryMenuViewControllerShouldDismiss:(id)arg1;
- (void)dealloc;
- (void)didSelectMenuItemAtIndexPath:(id)arg1;
- (void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2;
- (void)fetchDidCompleteForDataSource:(id)arg1;
- (void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (id)initWithMenuDataSource:(id)arg1;
- (void)menuCollectionViewControllerDidFinishLoading;
- (void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)vui_ppt_isLoading;

@end

