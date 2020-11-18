//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLChangeBatch, CPLPushToTransportTask, NSArray;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask;

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id<CPLEngineTransportCheckRecordsExistenceTask>)task:(CPLPushToTransportTask *)arg1 wantsToCheckRecordsExistence:(NSArray *)arg2 withCompletionHandler:(void (^)(NSArray *, NSError *))arg3;
- (id<CPLEngineTransportUploadBatchTask>)task:(CPLPushToTransportTask *)arg1 wantsToPushBatch:(CPLChangeBatch *)arg2 progressBlock:(void (^)(NSString *, float))arg3 continuationBlock:(void (^)(NSError *))arg4;
@end

