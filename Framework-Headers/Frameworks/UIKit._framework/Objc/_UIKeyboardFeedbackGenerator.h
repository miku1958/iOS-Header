//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator
{
    double _lastTypedKeyTimestamp;
}

@property (readonly, nonatomic, getter=_keyboardConfiguration) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (nonatomic, getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:) double lastTypedKeyTimestamp; // @synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp;

+ (Class)_configurationClass;
- (void)_activated;
- (double)_autoDeactivationTimeout;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(CDUnknownBlockType)arg2;
- (id)_stats_key;
- (void)actionOccurred:(long long)arg1;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;

@end

