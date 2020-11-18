//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface SBFLegibilitySettings : PTSettings
{
    double _slideToUnlockDarkShadowStrength;
    double _slideToUnlockLightShadowStrength;
    double _appIconGrabberDarkShadowStrength;
    double _appIconGrabberLightShadowStrength;
    double _timeDarkShadowStrength;
    double _timeLightShadowStrength;
    double _dateDarkShadowStrength;
    double _dateLightShadowStrength;
    double _statusTextDarkShadowStrength;
    double _statusTextLightShadowStrength;
    double _iconLabelDarkShadowStrength;
    double _iconLabelLightShadowStrength;
    double _folderTitleDarkShadowStrength;
    double _folderTitleLightShadowStrength;
    double _timerTextDarkShadowStrength;
    double _timerTextLightShadowStrength;
    double _timerDialDarkShadowStrength;
    double _timerDialLightShadowStrength;
    double _logoutButtonGlyphDarkShadowStrength;
    double _logoutButtonGlyphLightShadowStrength;
    double _logoutButtonTextDarkShadowStrength;
    double _logoutButtonTextLightShadowStrength;
    double _userPictureDarkShadowStrength;
    double _userPictureLightShadowStrength;
}

@property double appIconGrabberDarkShadowStrength; // @synthesize appIconGrabberDarkShadowStrength=_appIconGrabberDarkShadowStrength;
@property double appIconGrabberLightShadowStrength; // @synthesize appIconGrabberLightShadowStrength=_appIconGrabberLightShadowStrength;
@property double dateDarkShadowStrength; // @synthesize dateDarkShadowStrength=_dateDarkShadowStrength;
@property double dateLightShadowStrength; // @synthesize dateLightShadowStrength=_dateLightShadowStrength;
@property double folderTitleDarkShadowStrength; // @synthesize folderTitleDarkShadowStrength=_folderTitleDarkShadowStrength;
@property double folderTitleLightShadowStrength; // @synthesize folderTitleLightShadowStrength=_folderTitleLightShadowStrength;
@property double iconLabelDarkShadowStrength; // @synthesize iconLabelDarkShadowStrength=_iconLabelDarkShadowStrength;
@property double iconLabelLightShadowStrength; // @synthesize iconLabelLightShadowStrength=_iconLabelLightShadowStrength;
@property double logoutButtonGlyphDarkShadowStrength; // @synthesize logoutButtonGlyphDarkShadowStrength=_logoutButtonGlyphDarkShadowStrength;
@property double logoutButtonGlyphLightShadowStrength; // @synthesize logoutButtonGlyphLightShadowStrength=_logoutButtonGlyphLightShadowStrength;
@property double logoutButtonTextDarkShadowStrength; // @synthesize logoutButtonTextDarkShadowStrength=_logoutButtonTextDarkShadowStrength;
@property double logoutButtonTextLightShadowStrength; // @synthesize logoutButtonTextLightShadowStrength=_logoutButtonTextLightShadowStrength;
@property double slideToUnlockDarkShadowStrength; // @synthesize slideToUnlockDarkShadowStrength=_slideToUnlockDarkShadowStrength;
@property double slideToUnlockLightShadowStrength; // @synthesize slideToUnlockLightShadowStrength=_slideToUnlockLightShadowStrength;
@property double statusTextDarkShadowStrength; // @synthesize statusTextDarkShadowStrength=_statusTextDarkShadowStrength;
@property double statusTextLightShadowStrength; // @synthesize statusTextLightShadowStrength=_statusTextLightShadowStrength;
@property double timeDarkShadowStrength; // @synthesize timeDarkShadowStrength=_timeDarkShadowStrength;
@property double timeLightShadowStrength; // @synthesize timeLightShadowStrength=_timeLightShadowStrength;
@property double timerDialDarkShadowStrength; // @synthesize timerDialDarkShadowStrength=_timerDialDarkShadowStrength;
@property double timerDialLightShadowStrength; // @synthesize timerDialLightShadowStrength=_timerDialLightShadowStrength;
@property double timerTextDarkShadowStrength; // @synthesize timerTextDarkShadowStrength=_timerTextDarkShadowStrength;
@property double timerTextLightShadowStrength; // @synthesize timerTextLightShadowStrength=_timerTextLightShadowStrength;
@property double userPictureDarkShadowStrength; // @synthesize userPictureDarkShadowStrength=_userPictureDarkShadowStrength;
@property double userPictureLightShadowStrength; // @synthesize userPictureLightShadowStrength=_userPictureLightShadowStrength;

+ (id)settingsControllerModule;
- (double)appIconGrabberStrengthForStyle:(long long)arg1;
- (double)dateStrengthForStyle:(long long)arg1;
- (double)folderTitleStrengthForStyle:(long long)arg1;
- (double)iconLabelStrengthForStyle:(long long)arg1;
- (double)logoutButtonGlyphStrengthForStyle:(long long)arg1;
- (double)logoutButtonTextStrengthForStyle:(long long)arg1;
- (void)setDefaultValues;
- (double)slideToUnlockStrengthForStyle:(long long)arg1;
- (double)statusTextStrengthForStyle:(long long)arg1;
- (double)timeStrengthForStyle:(long long)arg1;
- (double)timerDialStrengthForStyle:(long long)arg1;
- (double)timerTextStrengthForStyle:(long long)arg1;
- (double)userPictureStrengthForStyle:(long long)arg1;

@end
