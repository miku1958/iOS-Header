//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

@property (readonly, getter=isDualCameraFusionEnabled) BOOL dualCameraFusionEnabled;
@property (readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly, getter=isFlashEnabled) BOOL flashEnabled;
@property (readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property (readonly) CDStruct_79c71658 photoDimensions;
@property (readonly) CDStruct_79c71658 previewDimensions;
@property (readonly) CDStruct_79c71658 rawPhotoDimensions;
@property (readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled;
@property (readonly) long long uniqueID;

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 livePhotoMovieEnabled:(BOOL)arg6 livePhotoMovieDimensions:(CDStruct_79c71658)arg7 turboModeEnabled:(BOOL)arg8 flashEnabled:(BOOL)arg9 HDREnabled:(BOOL)arg10 adjustedPhotoFiltersEnabled:(BOOL)arg11 EV0PhotoDeliveryEnabled:(BOOL)arg12 stillImageStabilizationEnabled:(BOOL)arg13 dualCameraFusionEnabled:(BOOL)arg14 squareCropEnabled:(BOOL)arg15 photoManifest:(id)arg16;
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 livePhotoMovieEnabled:(BOOL)arg6 livePhotoMovieDimensions:(CDStruct_79c71658)arg7 turboModeEnabled:(BOOL)arg8 flashEnabled:(BOOL)arg9 HDREnabled:(BOOL)arg10 adjustedPhotoFiltersEnabled:(BOOL)arg11 EV0PhotoDeliveryEnabled:(BOOL)arg12 stillImageStabilizationEnabled:(BOOL)arg13 dualCameraFusionEnabled:(BOOL)arg14 squareCropEnabled:(BOOL)arg15 photoManifest:(id)arg16;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)isAdjustedPhotoFilterRenderingEnabled;
- (BOOL)isEV0PhotoDeliveryEnabled;
- (BOOL)isHDREnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isTurboModeEnabled;
- (BOOL)livePhotoMovieEnabled;
- (id)photoManifest;

@end

