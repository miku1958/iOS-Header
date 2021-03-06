//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;
    CDUnknownBlockType _feedbackUpdateBlock;
    double _minimumInterval;
}

@property (strong, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback; // @synthesize feedback=_feedback;
@property (copy, nonatomic) CDUnknownBlockType feedbackUpdateBlock; // @synthesize feedbackUpdateBlock=_feedbackUpdateBlock;
@property (nonatomic) double minimumInterval; // @synthesize minimumInterval=_minimumInterval;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)rigidConfiguration;
+ (id)softConfiguration;
+ (id)strongConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)arg1;
- (long long)requiredSupportLevel;

@end

