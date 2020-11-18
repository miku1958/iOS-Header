//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, PLPhotoLibrary, PLPhotoLibraryBundle;
@protocol OS_dispatch_queue;

@interface PLCameraProcessingAdjustmentService : NSObject
{
    struct os_unfair_lock_s _lock;
    _Atomic long long _cancellationGenerationCounter;
    NSProgress *_currentProgress;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;

- (void).cxx_destruct;
- (id)enqueueCameraProcessingAdjustmentRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithLibraryBundle:(id)arg1;
- (id)photoLibrary;

@end
