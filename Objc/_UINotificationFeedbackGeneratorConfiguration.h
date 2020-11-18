//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration
{
    BOOL _includePrivateEvents;
    NSDictionary *_feedbacks;
}

@property (strong, nonatomic) NSDictionary *feedbacks; // @synthesize feedbacks=_feedbacks;
@property (nonatomic) BOOL includePrivateEvents; // @synthesize includePrivateEvents=_includePrivateEvents;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;
+ (id)privateConfigurationForTypes:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)defaultEnabled;
- (id)feedbackKeyPaths;
- (BOOL)isEqual:(id)arg1;

@end

