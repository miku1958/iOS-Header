//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLPullFromTransportTask, NSData;
@protocol CPLEngineTransportDownloadBatchTask;

@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id<CPLEngineTransportDownloadBatchTask>)task:(CPLPullFromTransportTask *)arg1 wantsToDownloadBatchesFromSyncAnchor:(NSData *)arg2 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg3 completionHandler:(void (^)(NSData *, BOOL, NSError *))arg4;
@end
