//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSHomeScreenServiceServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSArray;
@protocol OS_dispatch_queue;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface>
{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (nonatomic) BOOL addsNewIconsToHomeScreen;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (nonatomic, getter=isLowDensityIconLayoutEnabled) BOOL lowDensityIconLayoutEnabled;
@property (nonatomic) BOOL showsBadgesInAppLibrary;

- (void).cxx_destruct;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
- (void)changeDisplayedDateOffsetOverride:(double)arg1;
- (void)changeDisplayedDateOverride:(id)arg1;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)dealloc;
- (BOOL)debugContinuityWithBadgeType:(id)arg1;
- (id)folderPathToIconWithBundleIdentifier:(id)arg1;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)hasWidgetWithBundleIdentifier:(id)arg1;
- (void)ignoreAllApps;
- (id)init;
- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1;
- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1;
- (void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)reloadIcons;
- (void)removeAllWidgets;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAppLibraryUpdateWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCategoriesLayoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetHomeScreenLayoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)runDownloadingIconTest;
- (oneway void)runFloatingDockStressTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)runRemoveAndRestoreIconTest;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

