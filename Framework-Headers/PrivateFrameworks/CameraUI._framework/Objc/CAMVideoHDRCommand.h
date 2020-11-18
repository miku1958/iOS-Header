//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoHDRCommand : CAMCaptureCommand
{
    BOOL __enabled;
}

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled; // @synthesize _enabled=__enabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoHDREnabled:(BOOL)arg1;

@end

