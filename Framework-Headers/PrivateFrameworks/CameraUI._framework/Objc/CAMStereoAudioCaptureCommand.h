//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand
{
    BOOL _stereoAudioCaptureEnabled;
}

@property (readonly, nonatomic, getter=isStereoAudioCaptureEnabled) BOOL stereoAudioCaptureEnabled; // @synthesize stereoAudioCaptureEnabled=_stereoAudioCaptureEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStereoAudioCaptureEnabled:(BOOL)arg1;

@end

