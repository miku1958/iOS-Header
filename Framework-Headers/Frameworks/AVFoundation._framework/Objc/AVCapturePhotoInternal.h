//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVApplePortraitMetadata, AVCameraCalibrationData, AVCaptureBracketedStillImageSettings, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVDepthData, NSDictionary, NSString;

@interface AVCapturePhotoInternal : NSObject
{
    CDStruct_1b6d18a9 timestamp;
    void *photoSurface;
    unsigned long long photoSurfaceSize;
    struct __CVBuffer *photoPixelBuffer;
    struct __CVBuffer *previewPixelBuffer;
    struct __CVBuffer *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    BOOL didTryToDecodeDepthData;
    BOOL isRawPhoto;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    unsigned long long sequenceCount;
    unsigned long long photoCount;
    NSString *sourceDeviceType;
    unsigned int expectedPhotoProcessingFlags;
    unsigned int actualPhotoProcessingFlags;
    AVApplePortraitMetadata *portraitMetadata;
}

@end
