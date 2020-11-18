//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

#import <CameraUI/NSCoding-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>

@interface CAMFlashCommand : CAMCaptureCommand <NSCopying, NSCoding>
{
    long long __flashMode;
}

@property (readonly, nonatomic) long long _flashMode; // @synthesize _flashMode=__flashMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlashMode:(long long)arg1;

@end

