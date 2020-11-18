//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand
{
    BOOL __blinkDetectionEnabled;
    BOOL __smileDetectionEnabled;
}

@property (readonly, nonatomic, getter=_isBlinkDetectionEnabled) BOOL _blinkDetectionEnabled; // @synthesize _blinkDetectionEnabled=__blinkDetectionEnabled;
@property (readonly, nonatomic, getter=_isSmileDetectionEnabled) BOOL _smileDetectionEnabled; // @synthesize _smileDetectionEnabled=__smileDetectionEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithBlinkDetection:(BOOL)arg1 smileDetection:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;

@end
