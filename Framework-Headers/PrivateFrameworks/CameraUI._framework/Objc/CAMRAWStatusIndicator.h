//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMRAWStatusIndicator : CAMControlStatusIndicator
{
    long long _rawMode;
}

@property (nonatomic, setter=setRAWMode:) long long rawMode; // @synthesize rawMode=_rawMode;

- (id)imageNameForCurrentState;
- (struct CGSize)intrinsicContentSize;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setRAWMode:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end

