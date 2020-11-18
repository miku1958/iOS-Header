//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISettings.h>

@class CCUIControlCenterSettingsSectionSettings, CCUIControlCenterShortcutSectionSettings;

@interface CCUIControlCenterSettings : _UISettings
{
    BOOL _useNewBounce;
    double _backgroundDarkening;
    double _platterWallpaperAlpha;
    CCUIControlCenterSettingsSectionSettings *_settingsSectionSettings;
    CCUIControlCenterShortcutSectionSettings *_shortcutSectionSettings;
    double _oldBounceFriction;
    double _bounceDensityFactor;
    double _bounceResistance;
    double _minVelocity;
    double _maxVelocity;
    double _attachmentThreshold;
    double _attachmentFrequencyAbove;
    double _attachmentFrequencyBelow;
    double _attachmentVelocityDamping;
    double _attachmentMinDamping;
    double _attachmentMaxDamping;
}

@property double attachmentFrequencyAbove; // @synthesize attachmentFrequencyAbove=_attachmentFrequencyAbove;
@property double attachmentFrequencyBelow; // @synthesize attachmentFrequencyBelow=_attachmentFrequencyBelow;
@property double attachmentMaxDamping; // @synthesize attachmentMaxDamping=_attachmentMaxDamping;
@property double attachmentMinDamping; // @synthesize attachmentMinDamping=_attachmentMinDamping;
@property double attachmentThreshold; // @synthesize attachmentThreshold=_attachmentThreshold;
@property double attachmentVelocityDamping; // @synthesize attachmentVelocityDamping=_attachmentVelocityDamping;
@property double backgroundDarkening; // @synthesize backgroundDarkening=_backgroundDarkening;
@property double bounceDensityFactor; // @synthesize bounceDensityFactor=_bounceDensityFactor;
@property double bounceResistance; // @synthesize bounceResistance=_bounceResistance;
@property double maxVelocity; // @synthesize maxVelocity=_maxVelocity;
@property double minVelocity; // @synthesize minVelocity=_minVelocity;
@property double oldBounceFriction; // @synthesize oldBounceFriction=_oldBounceFriction;
@property double platterWallpaperAlpha; // @synthesize platterWallpaperAlpha=_platterWallpaperAlpha;
@property (strong) CCUIControlCenterSettingsSectionSettings *settingsSectionSettings; // @synthesize settingsSectionSettings=_settingsSectionSettings;
@property (strong) CCUIControlCenterShortcutSectionSettings *shortcutSectionSettings; // @synthesize shortcutSectionSettings=_shortcutSectionSettings;
@property BOOL useNewBounce; // @synthesize useNewBounce=_useNewBounce;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
