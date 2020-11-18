//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator
{
}

@property (readonly, nonatomic, getter=_eventConfiguration) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;

+ (Class)_configurationClass;
- (id)_categoryForType:(long long)arg1;
- (void)_playEventType:(long long)arg1;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (void)_privateNotificationInterrupted:(long long)arg1;
- (void)_privateNotificationOccurred:(long long)arg1;
- (id)_stats_key;
- (void)_stopEventType:(long long)arg1;
- (void)notificationOccurred:(long long)arg1;

@end
