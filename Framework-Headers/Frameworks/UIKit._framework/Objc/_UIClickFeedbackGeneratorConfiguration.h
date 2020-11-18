//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownAudioFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpAudioFeedback;
}

@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback; // @synthesize clickDownAudioFeedback=_clickDownAudioFeedback;
@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback; // @synthesize clickDownFeedback=_clickDownFeedback;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback; // @synthesize clickUpAudioFeedback=_clickUpAudioFeedback;
@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback; // @synthesize clickUpFeedback=_clickUpFeedback;
@property (readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;

+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;
- (void)setclickDownFeedback:(id)arg1;

@end
