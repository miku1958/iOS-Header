//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBXUnitSupport, HKHealthChartFactory, WDProfile;

@interface HBXViewControllerFactory : NSObject
{
    HKHealthChartFactory *_chartFactory;
    WDProfile *_profile;
    HBXUnitSupport *_unitSupport;
}

@property (strong, nonatomic) HKHealthChartFactory *chartFactory; // @synthesize chartFactory=_chartFactory;
@property (strong, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) HBXUnitSupport *unitSupport; // @synthesize unitSupport=_unitSupport;

+ (id)factories;
+ (struct os_unfair_recursive_lock_s)factoriesLock;
+ (id)sharedInstance;
+ (id)sharedInstanceForHealthStore:(id)arg1;
- (void).cxx_destruct;
- (id)createActivityChart:(id)arg1;
- (id)createActivityChartForActivityMoveMode:(long long)arg1 displayDate:(id)arg2;
- (void)createAndStartExportForViewController:(id)arg1;
- (id)createAppSourcesViewControllerUsingInsetStyling:(BOOL)arg1;
- (id)createBuddyViewController;
- (id)createChartForTypeIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 minimumSize:(struct CGSize)arg4 disableXAxis:(BOOL)arg5;
- (id)createContactConsolidationControllerInViewController:(id)arg1;
- (id)createDataSourcesTableViewController:(id)arg1;
- (id)createDeletedSourceMessageViewControllerForSource:(id)arg1;
- (id)createDetailViewControllerForType:(id)arg1;
- (id)createDetailViewControllerForType:(id)arg1 displayDate:(id)arg2;
- (id)createDeviceSourcesViewControllerUsingInsetStyling:(BOOL)arg1;
- (id)createDeviceStoredDataViewControllerForDevice:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3;
- (id)createElectrocardiogramDataMetadataViewControllerWithElectrocardiogram:(id)arg1 dataProvider:(id)arg2;
- (id)createElectrocardiogramListDataProvider;
- (id)createFavoritesController;
- (id)createHKUnitPreferenceController;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDate:(id)arg3;
- (id)createInteractiveChartForType:(id)arg1 preferredOverlay:(long long)arg2 displayDateInterval:(id)arg3;
- (id)createListViewController:(id)arg1;
- (id)createLocalDeviceStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3;
- (id)createResearchStudySourcesViewControllerUsingInsetStyling:(BOOL)arg1 restorationStudyBundleIdentifier:(id)arg2;
- (id)createSingleAppAuthorizationViewControllerUsingInsetStyling:(BOOL)arg1 restorationApplicationBundleIdentifier:(id)arg2;
- (id)createSourcesViewControllerUsingInsetStyling:(BOOL)arg1;
- (id)createUnitPreferencesController:(id)arg1;
- (id)createWatchStoredDataViewControllerForSource:(id)arg1 withHealthStore:(id)arg2 usingInsetStyling:(BOOL)arg3;
- (id)detailViewControllerForSourceModel:(id)arg1 withHealthStore:(id)arg2;
- (void)fetchUserDefaultForKey:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2;
- (id)localizedUnitDisplayNameForDisplayType:(id)arg1 nameContext:(long long)arg2;
- (id)notificationManager;
- (id)preferredUnitForType:(id)arg1;
- (id)unitStringForType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;

@end

