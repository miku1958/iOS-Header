//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureFileOutputDelegateWrapper.h>

@class AVMomentCaptureMovieRecordingResolvedSettings, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper
{
    NSString *_videoCodecType;
    NSURL *_spatialOverCaptureMovieFileURL;
    NSArray *_spatialOverCaptureMovieMetadata;
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    BOOL _didFinishWritingMovieCallbackFired;
    BOOL _didFinishWritingSpatialOverCaptureMovieCallbackFired;
}

@property (nonatomic) BOOL didFinishWritingMovieCallbackFired; // @synthesize didFinishWritingMovieCallbackFired=_didFinishWritingMovieCallbackFired;
@property (nonatomic) BOOL didFinishWritingSpatialOverCaptureMovieCallbackFired; // @synthesize didFinishWritingSpatialOverCaptureMovieCallbackFired=_didFinishWritingSpatialOverCaptureMovieCallbackFired;
@property (strong, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings; // @synthesize resolvedSettings=_resolvedSettings;
@property (readonly) NSURL *spatialOverCaptureMovieFileURL; // @synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL;
@property (readonly) NSArray *spatialOverCaptureMovieMetadata; // @synthesize spatialOverCaptureMovieMetadata=_spatialOverCaptureMovieMetadata;
@property (readonly) NSString *videoCodecType; // @synthesize videoCodecType=_videoCodecType;

+ (id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

@end

