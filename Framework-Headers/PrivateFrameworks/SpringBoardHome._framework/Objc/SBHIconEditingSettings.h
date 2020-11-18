//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class PTOutlet;

@interface SBHIconEditingSettings : PTSettings
{
    BOOL _showIndexLabels;
    BOOL _showDragPlatterIconBorder;
    BOOL _waitForPause;
    PTOutlet *_resetHomeScreenLayoutOutlet;
    double _editingLiftDelay;
    double _longPressToEditDuration;
    double _defaultPauseDuration;
    double _fastEditingPauseDuration;
    double _defaultSpringDampingRatio;
    double _defaultSpringDuration;
    double _clusterFastestDuration;
    double _clusterSlowestDuration;
    double _clusterMiddleFastDuration;
    double _clusterMiddleSlowDuration;
    long long _overrideAnimationType;
}

@property (nonatomic) double clusterFastestDuration; // @synthesize clusterFastestDuration=_clusterFastestDuration;
@property (nonatomic) double clusterMiddleFastDuration; // @synthesize clusterMiddleFastDuration=_clusterMiddleFastDuration;
@property (nonatomic) double clusterMiddleSlowDuration; // @synthesize clusterMiddleSlowDuration=_clusterMiddleSlowDuration;
@property (nonatomic) double clusterSlowestDuration; // @synthesize clusterSlowestDuration=_clusterSlowestDuration;
@property (nonatomic) double defaultPauseDuration; // @synthesize defaultPauseDuration=_defaultPauseDuration;
@property (nonatomic) double defaultSpringDampingRatio; // @synthesize defaultSpringDampingRatio=_defaultSpringDampingRatio;
@property (nonatomic) double defaultSpringDuration; // @synthesize defaultSpringDuration=_defaultSpringDuration;
@property (nonatomic) double editingLiftDelay; // @synthesize editingLiftDelay=_editingLiftDelay;
@property (nonatomic) double fastEditingPauseDuration; // @synthesize fastEditingPauseDuration=_fastEditingPauseDuration;
@property (nonatomic) double longPressToEditDuration; // @synthesize longPressToEditDuration=_longPressToEditDuration;
@property (nonatomic) long long overrideAnimationType; // @synthesize overrideAnimationType=_overrideAnimationType;
@property (strong, nonatomic) PTOutlet *resetHomeScreenLayoutOutlet; // @synthesize resetHomeScreenLayoutOutlet=_resetHomeScreenLayoutOutlet;
@property (nonatomic) BOOL showDragPlatterIconBorder; // @synthesize showDragPlatterIconBorder=_showDragPlatterIconBorder;
@property (nonatomic) BOOL showIndexLabels; // @synthesize showIndexLabels=_showIndexLabels;
@property (nonatomic) BOOL waitForPause; // @synthesize waitForPause=_waitForPause;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
