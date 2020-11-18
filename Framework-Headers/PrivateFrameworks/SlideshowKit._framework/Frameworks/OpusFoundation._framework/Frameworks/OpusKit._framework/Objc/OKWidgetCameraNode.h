//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetNode.h>

@class SCNCamera;

@interface OKWidgetCameraNode : OKWidgetNode
{
    SCNCamera *_camera;
}

@property (readonly, strong, nonatomic) SCNCamera *camera; // @synthesize camera=_camera;

+ (id)proxyForNode:(id)arg1;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (void)setSettingAperture:(double)arg1;
- (void)setSettingCameraName:(id)arg1;
- (void)setSettingFocalBlurRadius:(double)arg1;
- (void)setSettingFocalDistance:(double)arg1;
- (void)setSettingFocalSize:(double)arg1;
- (void)setSettingUsesOrthographicProjection:(BOOL)arg1;
- (void)setSettingXFov:(double)arg1;
- (void)setSettingYFov:(double)arg1;
- (void)setSettingZFar:(double)arg1;
- (void)setSettingZNear:(double)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (double)settingAperture;
- (id)settingCameraName;
- (double)settingFocalBlurRadius;
- (double)settingFocalDistance;
- (double)settingFocalSize;
- (id)settingObjectForKey:(id)arg1;
- (BOOL)settingUsesOrthographicProjection;
- (double)settingXFov;
- (double)settingYFov;
- (double)settingZFar;
- (double)settingZNear;

@end

