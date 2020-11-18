//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSManagedObjectID, NSObject, PLCPLDownloadContext;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHCloudResourceRequest : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_downloadFinishedSemaphore;
    CDUnknownBlockType _progressHandler;
    PLCPLDownloadContext *_downloadContext;
    int _requestID;
    NSManagedObjectID *_objectID;
    unsigned long long _cloudResourceType;
    NSError *_error;
}

@property (readonly, nonatomic) unsigned long long cloudResourceType; // @synthesize cloudResourceType=_cloudResourceType;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property (readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;

- (void).cxx_destruct;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)main;
- (void)updateResourceRequestStatusForConnectionLost:(BOOL)arg1;

@end

