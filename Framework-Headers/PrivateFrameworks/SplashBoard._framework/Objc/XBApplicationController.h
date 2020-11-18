//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject
{
    FBSDisplayConfiguration *_mainDisplayConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_allApplications;
- (id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2;
- (void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_migrateDataIfNeeded;
- (void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(BOOL)arg2;
- (void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(BOOL)arg3;
- (id)allSplashBoardApplications;
- (id)allSplashBoardSystemApplications;
- (id)init;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)removeAllGeneratedLaunchImages;
- (void)removeAllGeneratedLaunchImagesAndSnapshots;
- (void)resetEverything;

@end
