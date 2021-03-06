//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton
{
    BOOL _on;
    BOOL _disabled;
}

@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;

- (BOOL)adjustsImageWhenDisabled;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)setDisabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end

