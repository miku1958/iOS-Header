//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVCaptureIrisResolvedStillImageSettings : NSObject
{
    long long _uniqueID;
    CDStruct_79c71658 _stillImageDimensions;
    CDStruct_79c71658 _previewDimensions;
    CDStruct_79c71658 _irisMovieDimenions;
    BOOL _irisMovieEnabled;
    BOOL _flashEnabled;
    BOOL _HDREnabled;
    BOOL _EV0CaptureEnabled;
    BOOL _stillImageStabilizationEnabled;
    BOOL _squareCropEnabled;
}

@property (readonly, getter=isEV0CaptureEnabled) BOOL EV0CaptureEnabled; // @synthesize EV0CaptureEnabled=_EV0CaptureEnabled;
@property (readonly, getter=isHDREnabled) BOOL HDREnabled; // @synthesize HDREnabled=_HDREnabled;
@property (readonly, getter=isFlashEnabled) BOOL flashEnabled; // @synthesize flashEnabled=_flashEnabled;
@property (readonly) CDStruct_79c71658 irisMovieDimensions; // @synthesize irisMovieDimensions=_irisMovieDimenions;
@property (readonly, getter=isIrisMovieEnabled) BOOL irisMovieEnabled; // @synthesize irisMovieEnabled=_irisMovieEnabled;
@property (readonly) CDStruct_79c71658 previewDimensions; // @synthesize previewDimensions=_previewDimensions;
@property (readonly, getter=isSquareCropEnabled) BOOL squareCropEnabled; // @synthesize squareCropEnabled=_squareCropEnabled;
@property (readonly) CDStruct_79c71658 stillImageDimensions; // @synthesize stillImageDimensions=_stillImageDimensions;
@property (readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled; // @synthesize stillImageStabilizationEnabled=_stillImageStabilizationEnabled;
@property (readonly) long long uniqueID; // @synthesize uniqueID=_uniqueID;

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 stillImageDimensions:(CDStruct_79c71658)arg2 previewDimensions:(CDStruct_79c71658)arg3 irisMovieEnabled:(BOOL)arg4 irisMovieDimensions:(CDStruct_79c71658)arg5 flashEnabled:(BOOL)arg6 HDREnabled:(BOOL)arg7 EV0CaptureEnabled:(BOOL)arg8 stillImageStabilizationEnabled:(BOOL)arg9 squareCropEnabled:(BOOL)arg10;
- (id)_initWithUniqueID:(long long)arg1 stillImageDimensions:(CDStruct_79c71658)arg2 previewDimensions:(CDStruct_79c71658)arg3 irisMovieEnabled:(BOOL)arg4 irisMovieDimensions:(CDStruct_79c71658)arg5 flashEnabled:(BOOL)arg6 HDREnabled:(BOOL)arg7 EV0CaptureEnabled:(BOOL)arg8 stillImageStabilizationEnabled:(BOOL)arg9 squareCropEnabled:(BOOL)arg10;
- (id)description;

@end
