//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXEditSourceLoader-Protocol.h>

@class NSDate, NSError, NSNumber, NSProgress, NSString, PHAsset, PICompositionController, PLEditSource;
@protocol OS_dispatch_queue;

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader>
{
    unsigned long long _loadingQueue_imageRequestID;
    NSDate *_mainQueue_loadingStartDate;
    NSProgress *_editSourceCreationProgress;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _overcaptureSourceIsActive;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PICompositionController *_compositionController;
    PICompositionController *_originalCompositionController;
    NSProgress *_progress;
    NSError *_error;
    long long _baseVersion;
    NSNumber *_loadDuration;
    NSString *_livePhotoPairingIdentifier;
    PHAsset *_asset;
}

@property (readonly, nonatomic) PLEditSource *activeEditSource;
@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property (readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property (readonly, nonatomic) NSNumber *loadDuration; // @synthesize loadDuration=_loadDuration;
@property (readonly, copy, nonatomic) PICompositionController *originalCompositionController; // @synthesize originalCompositionController=_originalCompositionController;
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelContentInputRequest;
- (void)_handleCancellation;
- (void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3;
- (void)_mainQueue_handleEditSource:(id)arg1 overCaptureEditSource:(id)arg2 compositionController:(id)arg3 originalCompositionController:(id)arg4 overCaptureEditSourceIsActive:(BOOL)arg5 error:(id)arg6;
- (void)_resetProgress;
- (void)beginLoading;
- (id)initWithAsset:(id)arg1;

@end

