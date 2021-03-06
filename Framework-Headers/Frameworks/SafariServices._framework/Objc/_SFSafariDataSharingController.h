//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject
{
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)checkInAppBundleIDIfNeeded:(id)arg1;
- (void)clearAllWebsitesData;
- (id)init;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;

@end

