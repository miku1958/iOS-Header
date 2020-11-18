//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBackdropViewSettings.h>

__attribute__((visibility("hidden")))
@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings
{
    _UIBackdropViewSettings *_inputSettingsA;
    _UIBackdropViewSettings *_inputSettingsB;
    double _weighting;
    _UIBackdropViewSettings *_outputSettingsA;
    _UIBackdropViewSettings *_outputSettingsB;
}

@property (strong, nonatomic) _UIBackdropViewSettings *inputSettingsA; // @synthesize inputSettingsA=_inputSettingsA;
@property (strong, nonatomic) _UIBackdropViewSettings *inputSettingsB; // @synthesize inputSettingsB=_inputSettingsB;
@property (strong, nonatomic) _UIBackdropViewSettings *outputSettingsA; // @synthesize outputSettingsA=_outputSettingsA;
@property (strong, nonatomic) _UIBackdropViewSettings *outputSettingsB; // @synthesize outputSettingsB=_outputSettingsB;
@property (nonatomic) double weighting; // @synthesize weighting=_weighting;

- (void).cxx_destruct;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (BOOL)isBackdropVisible;
- (BOOL)requiresBackdropLayer;
- (void)setDefaultValues;
- (void)setRequiresColorStatistics:(BOOL)arg1;

@end

