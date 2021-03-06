//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMTimelapseSettings : NSObject
{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

@property (readonly, nonatomic) double initialCaptureTimeInterval; // @synthesize initialCaptureTimeInterval=_initialCaptureTimeInterval;
@property (readonly, nonatomic) long long maxFailedStateReadAttempts;
@property (readonly, nonatomic) long long maxMovieWriteAttempts;
@property (readonly, nonatomic) double maxOutputFPS; // @synthesize maxOutputFPS=_maxOutputFPS;
@property (readonly, nonatomic) long long maxOutputFrames;
@property (readonly, nonatomic) double maxOutputLength; // @synthesize maxOutputLength=_maxOutputLength;

+ (id)sharedInstance;
- (long long)_averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (id)_outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2;
- (id)init;
- (long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(BOOL)arg3;
- (double)outputFPSForFrameCount:(long long)arg1;
- (id)outputSettingsForWidth:(long long)arg1 height:(long long)arg2 videoFormatDescription:(struct opaqueCMFormatDescription *)arg3 framesPerSecond:(long long)arg4 frameCount:(long long)arg5 useHEVC:(BOOL)arg6;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1;

@end

