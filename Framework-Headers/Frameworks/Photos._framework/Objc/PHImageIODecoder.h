//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImageDecoder.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImageIODecoder : PHImageDecoder
{
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}

+ (long long)maxConcurrentDecodeCount;
+ (void)setMaxConcurrentDecodeCount:(long long)arg1;
+ (id)sharedDecoder;
- (void).cxx_destruct;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 existingRequestHandle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

@end
