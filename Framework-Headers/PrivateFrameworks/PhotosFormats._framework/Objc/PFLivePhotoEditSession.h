//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, CIContext, CIImage, NSDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface PFLivePhotoEditSession : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    AVAsset *_videoAsset;
    CDStruct_1b6d18a9 _inputVideoDuration;
    CDStruct_1b6d18a9 _photoTime;
    struct CGImageSource *_inputImageSource;
    unsigned int _inputOrientation;
    NSDictionary *_inputImageProperties;
    CIContext *_renderContext;
    AVAssetExportSession *_exportSession;
    CIImage *_inputImage;
    CIImage *_subsampledInputImage;
    long long _subsampleFactor;
    CIImage *_outputImage;
    CIImage *_scaledOutputImage;
    double _inputVideoScale;
    struct CGSize _inputVideoScaleRoundingError;
    CDUnknownBlockType _frameProcessor;
    NSString *_temporaryDirectory;
    NSURL *_lastTemporaryVideoURL;
    NSString *_uniqueIdentifier;
    BOOL _isExporting;
    float _audioVolume;
}

@property float audioVolume; // @synthesize audioVolume=_audioVolume;
@property (readonly) CDStruct_1b6d18a9 duration;
@property (copy) CDUnknownBlockType frameProcessor;
@property (readonly) CIImage *inputImage;
@property (readonly) unsigned int orientation;
@property (readonly) struct CGSize outputImageSize;
@property (readonly) struct CGSize outputVideoSize;
@property (readonly) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;

+ (id)_createTemporaryDirectory;
+ (id)temporaryDirectory;
- (void).cxx_destruct;
- (BOOL)_canRenderAtPlaybackTime;
- (void)_cancelCurrentExportIfNeeded;
- (void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_inputImage;
- (id)_inputImageProperties;
- (struct CGSize)_inputImageSize;
- (unsigned int)_inputOrientation;
- (CDStruct_1b6d18a9)_inputVideoDuration;
- (double)_inputVideoScale;
- (struct CGSize)_inputVideoSize;
- (id)_inputVideoTrack;
- (struct CGAffineTransform)_inputVideoTransform;
- (id)_loadInputImage;
- (unsigned int)_loadInputImageOrientation;
- (id)_loadInputImageProperties;
- (id)_loadInputImageWithSubsampleFactor:(long long)arg1;
- (CDStruct_1b6d18a9)_loadInputVideoDuration;
- (id)_outputImage;
- (id)_outputImageProperties;
- (struct CGSize)_outputImageSize;
- (id)_outputVideoMetadata;
- (struct CGSize)_outputVideoSize;
- (struct CGSize)_outputVideoSizeForScale:(double)arg1;
- (void)_prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_processImage:(id)arg1 scale:(double)arg2 error:(id *)arg3;
- (void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_renderImageWithTargetSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize)arg3 volume:(float)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_scaledInputImageForTargetScale:(double)arg1;
- (double)_targetScaleForTargetSize:(struct CGSize)arg1;
- (id)_temporaryURLOfType:(id)arg1;
- (id)_videoCompositionForTargetSize:(struct CGSize)arg1;
- (void)cancel;
- (void)dealloc;
- (void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)imageProperties;
- (id)init;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(CDStruct_1b6d18a9)arg3 photoOrientation:(unsigned int)arg4;
- (id)inputImageForRenderScale:(double)arg1;
- (id)outputImage;
- (void)prepareForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

