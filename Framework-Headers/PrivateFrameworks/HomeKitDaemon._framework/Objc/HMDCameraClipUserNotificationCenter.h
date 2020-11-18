//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBulletinBoard, HMDDeviceFileManager, HMDHeroFrameDataSource, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging>
{
    HMDBulletinBoard *_bulletinBoard;
    HMDDeviceFileManager *_fileManager;
    HMDHeroFrameDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_heroFrameDirPath;
}

@property (readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property (readonly) HMDHeroFrameDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDeviceFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *heroFrameDirPath; // @synthesize heroFrameDirPath=_heroFrameDirPath;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)_copyHeroFrameAtURL:(id)arg1;
- (BOOL)_createDirectoryAtPathIfNonExistent:(id)arg1;
- (unsigned long long)_effectiveReasonForSignificantEvent:(id)arg1;
- (void)_removeFile:(id)arg1;
- (id)initWithBulletinBoard:(id)arg1 fileManager:(id)arg2 dataSource:(id)arg3 workQueue:(id)arg4;
- (void)postSignificantEventNotification:(id)arg1 forCameraProfile:(id)arg2;
- (void)removeEventNotificationForClipWithUUID:(id)arg1;

@end
