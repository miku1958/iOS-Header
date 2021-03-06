//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLForegroundMonitorDelegate-Protocol.h>

@class NSString, NSURL, PLForegroundMonitor, PLPhotoAnalysisServiceClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate>
{
    BOOL _didTransitionToOpportunisticDisallowed;
    BOOL _photosAppInForeground;
    BOOL _cameraAppInForeground;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PLForegroundMonitor *_foregroundMonitor;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    long long _faceQuickClassificationRequestID;
    NSURL *_photoLibraryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_photoanalysisdIsRunning;
+ (BOOL)constraintsAllowSchedulingUserInitiatedAnalysisForAssets;
- (void).cxx_destruct;
- (void)_addBonusTime;
- (void)_disableAutoFGAndUserFGConstraints;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 forBundleIdentifier:(id)arg3;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)arg1;
- (void)informCameraAppForegroundState:(BOOL)arg1;
- (void)informOpportunisticTasksAllowed:(BOOL)arg1;
- (id)initWithPhotoAnalysisClient:(id)arg1 photoLibraryURL:(id)arg2;
- (BOOL)shouldScheduleUserInitiatedAnalysisForAssets;

@end

