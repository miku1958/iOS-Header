//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

#import <CameraUI/NSCoding-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>

@interface CAMHDRCommand : CAMCaptureCommand <NSCopying, NSCoding>
{
    BOOL __shouldCaptureOriginal;
    long long __HDRMode;
}

@property (readonly, nonatomic) long long _HDRMode; // @synthesize _HDRMode=__HDRMode;
@property (readonly, nonatomic) BOOL _shouldCaptureOriginal; // @synthesize _shouldCaptureOriginal=__shouldCaptureOriginal;

- (long long)_captureHDRModeForHDRMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHDRMode:(long long)arg1;
- (id)initWithHDRMode:(long long)arg1 shouldCaptureOriginal:(BOOL)arg2;

@end
