//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraSettingsControl;

@interface HMCameraSettingsControl : HMCameraControl
{
    _HMCameraSettingsControl *_settingsControl;
}

@property (readonly, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *currentVerticalTilt;
@property (readonly, nonatomic) HMCharacteristic *digitalZoom;
@property (readonly, nonatomic) HMCharacteristic *imageMirroring;
@property (readonly, nonatomic) HMCharacteristic *imageRotation;
@property (readonly, nonatomic) HMCharacteristic *nightVision;
@property (readonly, nonatomic) HMCharacteristic *opticalZoom;
@property (strong, nonatomic) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property (readonly, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property (readonly, nonatomic) HMCharacteristic *targetVerticalTilt;

- (void).cxx_destruct;
- (id)initWithSettingsControl:(id)arg1;

@end
