//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView
{
    unsigned int _seed;
    OFEmitterView *_emitterView;
    struct CGPoint _originalEmitterPosition;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (BOOL)isEmitting;
- (void)layoutSubviews;
- (void)pauseEmitter;
- (BOOL)prepareForDisplay:(BOOL)arg1;
- (BOOL)prepareForUnload:(BOOL)arg1;
- (BOOL)prepareForWarmup:(BOOL)arg1;
- (void)resumeEmitter;
- (void)setSettingBirthRate:(double)arg1;
- (void)setSettingEmitterCells:(id)arg1;
- (void)setSettingEmitterDepth:(double)arg1;
- (void)setSettingEmitterMode:(id)arg1;
- (void)setSettingEmitterPosition:(struct CGPoint)arg1;
- (void)setSettingEmitterShape:(id)arg1;
- (void)setSettingEmitterSize:(struct CGSize)arg1;
- (void)setSettingEmitterZPosition:(double)arg1;
- (void)setSettingLifetime:(double)arg1;
- (void)setSettingRenderMode:(id)arg1;
- (void)setSettingScale:(double)arg1;
- (void)setSettingSeed:(double)arg1;
- (void)setSettingSpin:(double)arg1;
- (void)setSettingVelocity:(double)arg1;
- (double)settingBirthRate;
- (id)settingEmitterCells;
- (double)settingEmitterDepth;
- (id)settingEmitterMode;
- (struct CGPoint)settingEmitterPosition;
- (id)settingEmitterShape;
- (struct CGSize)settingEmitterSize;
- (double)settingEmitterZPosition;
- (double)settingLifetime;
- (id)settingObjectForKey:(id)arg1;
- (id)settingRenderMode;
- (double)settingScale;
- (double)settingSeed;
- (double)settingSpin;
- (double)settingVelocity;

@end
