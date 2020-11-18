//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCompositeMediaResult.h>

@class NSMutableDictionary, NSNumber, NSURL, PHAdjustmentData, PHImageResult;

@interface PHContentEditingInputResult : PHCompositeMediaResult
{
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
    BOOL _canHandleAdjustmentData;
    NSNumber *_baseVersionNeeded;
    NSURL *_overCapturePhotoURL;
    NSURL *_overCaptureVideoURL;
    NSURL *_frontSwappingImageRenderURL;
    NSURL *_backSwappingImageRenderURL;
    NSURL *_frontSwappingVideoRenderURL;
    NSURL *_backSwappingVideoRenderURL;
    PHAdjustmentData *_originalAdjustmentData;
}

@property (copy, nonatomic) NSURL *backSwappingImageRenderURL; // @synthesize backSwappingImageRenderURL=_backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL; // @synthesize backSwappingVideoRenderURL=_backSwappingVideoRenderURL;
@property (strong, nonatomic) NSNumber *baseVersionNeeded; // @synthesize baseVersionNeeded=_baseVersionNeeded;
@property (nonatomic) BOOL canHandleAdjustmentData; // @synthesize canHandleAdjustmentData=_canHandleAdjustmentData;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL; // @synthesize frontSwappingImageRenderURL=_frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL; // @synthesize frontSwappingVideoRenderURL=_frontSwappingVideoRenderURL;
@property (strong, nonatomic) PHAdjustmentData *originalAdjustmentData; // @synthesize originalAdjustmentData=_originalAdjustmentData;
@property (strong, nonatomic) NSURL *overCapturePhotoURL; // @synthesize overCapturePhotoURL=_overCapturePhotoURL;
@property (strong, nonatomic) NSURL *overCaptureVideoURL; // @synthesize overCaptureVideoURL=_overCaptureVideoURL;

- (void).cxx_destruct;
- (void)addAdjustmentDataResult:(id)arg1;
- (void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;
- (id)adjustmentData;
- (id)cancelledInfoKey;
- (void)clearAdjustmentData;
- (BOOL)containsValidData;
- (id)description;
- (id)error;
- (id)errorInfoKey;
- (id)exifOrientation;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (id)imageData;
- (id)imagePropertiesLoadIfNeeded:(BOOL)arg1;
- (struct CGImage *)imageRef;
- (id)imageSandboxExtensionToken;
- (id)imageURL;
- (id)inCloudInfoKey;
- (void)mergeInfoDictionaryFromResult:(id)arg1;
- (void)setError:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoAdjustmentData;
- (id)videoSandboxExtensionToken;
- (id)videoURL;

@end
