//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AVAsset, AVVideoComposition, NSDictionary, NSError, NSNumber, NSProgress, NSURL, PICompositionController, PLLivePhotoEditSource, UIImage;

@interface PXAssetVariationRenderingOperation : NSOperation
{
    BOOL _renderAllResources;
    BOOL _succeeded;
    long long _variationType;
    PLLivePhotoEditSource *_editSource;
    PLLivePhotoEditSource *_overcaptureEditSource;
    NSDictionary *_analysisResult;
    PICompositionController *_baseCompositionController;
    CDUnknownBlockType _startHandler;
    NSURL *_outputImageURL;
    UIImage *_outputImage;
    NSURL *_outputVideoURL;
    PICompositionController *_adjustedCompositionController;
    AVAsset *_outputAVAsset;
    AVVideoComposition *_outputVideoComposition;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    struct CGSize _targetSize;
}

@property (readonly, copy, nonatomic) PICompositionController *adjustedCompositionController; // @synthesize adjustedCompositionController=_adjustedCompositionController;
@property (readonly, copy, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property (readonly, copy, nonatomic) PICompositionController *baseCompositionController; // @synthesize baseCompositionController=_baseCompositionController;
@property (readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) AVAsset *outputAVAsset; // @synthesize outputAVAsset=_outputAVAsset;
@property (readonly, nonatomic) UIImage *outputImage; // @synthesize outputImage=_outputImage;
@property (readonly, nonatomic) NSURL *outputImageURL; // @synthesize outputImageURL=_outputImageURL;
@property (readonly, nonatomic) AVVideoComposition *outputVideoComposition; // @synthesize outputVideoComposition=_outputVideoComposition;
@property (readonly, nonatomic) NSURL *outputVideoURL; // @synthesize outputVideoURL=_outputVideoURL;
@property (readonly, nonatomic) PLLivePhotoEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) BOOL renderAllResources; // @synthesize renderAllResources=_renderAllResources;
@property (copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property (readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (readonly, nonatomic) long long variationType; // @synthesize variationType=_variationType;

- (void).cxx_destruct;
- (void)_incrementProgressWithStartDate:(id)arg1;
- (void)_timeout;
- (void)cancel;
- (id)init;
- (id)initWithEditSource:(id)arg1 overcaptureEditSource:(id)arg2 variationType:(long long)arg3 analysisResult:(id)arg4 baseCompositionController:(id)arg5 outputImageURL:(id)arg6 outputVideoURL:(id)arg7 targetSize:(struct CGSize)arg8 renderAllResources:(BOOL)arg9;
- (void)main;

@end

