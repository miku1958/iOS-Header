//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UIFeedbackKeyboardBehaviorConfiguration : _UIFeedbackGeneratorConfiguration
{
    NSDictionary *_feedbacks;
    double _slowTypingTime;
    double _fastTypingTime;
    double _fastTypingVolumeMultiplier;
}

@property (nonatomic) double fastTypingTime; // @synthesize fastTypingTime=_fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier; // @synthesize fastTypingVolumeMultiplier=_fastTypingVolumeMultiplier;
@property (strong, nonatomic) NSDictionary *feedbacks; // @synthesize feedbacks=_feedbacks;
@property (nonatomic) double slowTypingTime; // @synthesize slowTypingTime=_slowTypingTime;

+ (id)defaultConfiguration;
- (void).cxx_destruct;
- (BOOL)_hasMutableFeedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)defaultEnabled;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)arg1;
- (long long)requiredSupportLevel;

@end

