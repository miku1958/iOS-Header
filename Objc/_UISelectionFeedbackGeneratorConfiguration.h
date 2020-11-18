//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;
    double _minimumInterval;
    double _maxSpeed;
    double _slowAudioVolume;
    double _fastAudioVolume;
    double _slowHapticVolume;
    double _fastHapticVolume;
}

@property (nonatomic) double fastAudioVolume; // @synthesize fastAudioVolume=_fastAudioVolume;
@property (nonatomic) double fastHapticVolume; // @synthesize fastHapticVolume=_fastHapticVolume;
@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // @synthesize feedback=_feedback;
@property (nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property (nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;
@property (nonatomic) double slowAudioVolume; // @synthesize slowAudioVolume=_slowAudioVolume;
@property (nonatomic) double slowHapticVolume; // @synthesize slowHapticVolume=_slowHapticVolume;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)pickerConfiguration;
+ (id)strongConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)arg1;

@end

