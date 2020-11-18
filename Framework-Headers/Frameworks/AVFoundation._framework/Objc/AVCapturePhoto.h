//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCameraCalibrationData, AVCapturePhotoInternal, AVCaptureResolvedPhotoSettings, AVDepthData, NSDictionary, NSString;

@interface AVCapturePhoto : NSObject
{
    AVCapturePhotoInternal *_internal;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVDepthData *depthData;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) NSDictionary *metadata;
@property (readonly) long long photoCount;
@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) struct __CVBuffer *previewPixelBuffer;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) CDStruct_1b6d18a9 timestamp;

- (struct CGImage *)CGImageRepresentation;
- (struct __CVBuffer *)_embeddedThumbnailSourcePixelBuffer;
- (unsigned int)_orientation;
- (unsigned int)actualPhotoProcessingFlags;
- (id)bracketSettings;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned int)expectedPhotoProcessingFlags;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg3 replacementDepthData:(id)arg4;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 photoSurface:(void *)arg2 photoSurfaceSize:(unsigned long long)arg3 previewPhotoSurface:(void *)arg4 metadata:(id)arg5 depthDataSurface:(void *)arg6 depthMetadataDictionary:(id)arg7 captureRequest:(id)arg8 bracketSettings:(id)arg9 sequenceCount:(unsigned long long)arg10 photoCount:(unsigned long long)arg11 expectedPhotoProcessingFlags:(unsigned int)arg12 sourceDeviceType:(id)arg13;
- (long long)lensStabilizationStatus;
- (id)livePhotoMovieFileURL;
- (unsigned int)photoProcessingFlags;
- (id)portraitMetadata;
- (struct CGImage *)previewCGImageRepresentation;
- (long long)sequenceCount;

@end
