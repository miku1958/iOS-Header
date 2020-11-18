//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface SGAppIconState : NSObject
{
    NSDictionary *_appLocation;
    NSSet *_dockedApps;
    NSSet *_folderApps;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)allAppsOnSpringboard;
- (id)allDockedApps;
- (id)allFolderApps;
- (BOOL)appInFolderWithBundleId:(id)arg1;
- (BOOL)appOnDockWithBundleId:(id)arg1;
- (long long)folderPageNumberForBundleId:(id)arg1;
- (id)init;
- (id)loadIconState;
- (void)parseIconState:(id)arg1;
- (void)reload;
- (long long)springboardPageLocationForBundleId:(id)arg1;
- (long long)springboardPageNumberForBundleId:(id)arg1;

@end
