//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@class CPLResource, NSObject;
@protocol CPLEngineTransportTask, OS_dispatch_queue;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportTask> _transportTask;
    CPLResource *_cloudResource;
    CDUnknownBlockType _launchHandler;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic) CPLResource *cloudResource; // @synthesize cloudResource=_cloudResource;
@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) CDUnknownBlockType launchHandler; // @synthesize launchHandler=_launchHandler;

+ (id)failedTaskForResource:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)finishWithData:(id)arg1 error:(id)arg2;
- (id)initWithLaunchHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)launch;
- (void)launchTransportTask:(id)arg1;

@end

