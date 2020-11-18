//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFeedbackData-Protocol.h>

@class NSString, NSURL, _UIFeedbackParameters;

__attribute__((visibility("hidden")))
@interface _UIFeedbackData : NSObject <_UIFeedbackData>
{
    unsigned int _effectiveSystemSoundID;
    unsigned long long _effectiveEventType;
    double _effectiveDuration;
    double _effectiveDelay;
    _UIFeedbackParameters *_hapticParameters;
    _UIFeedbackParameters *_audioParameters;
    unsigned long long _effectiveEnabledFeedbackTypes;
    NSURL *_fileURL;
    unsigned long long _fileFeedbackType;
}

@property (strong, nonatomic, setter=_setAudioParameters:) _UIFeedbackParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setEffectiveDelay:) double effectiveDelay; // @synthesize effectiveDelay=_effectiveDelay;
@property (nonatomic, setter=_setEffectiveDuration:) double effectiveDuration; // @synthesize effectiveDuration=_effectiveDuration;
@property (nonatomic, setter=_setEffectiveEnabledFeedbackTypes:) unsigned long long effectiveEnabledFeedbackTypes; // @synthesize effectiveEnabledFeedbackTypes=_effectiveEnabledFeedbackTypes;
@property (nonatomic, setter=_setEffectiveEventType:) unsigned long long effectiveEventType; // @synthesize effectiveEventType=_effectiveEventType;
@property (nonatomic, setter=_setEffectiveSystemSoundID:) unsigned int effectiveSystemSoundID; // @synthesize effectiveSystemSoundID=_effectiveSystemSoundID;
@property (nonatomic, setter=_setFileFeedbackType:) unsigned long long fileFeedbackType; // @synthesize fileFeedbackType=_fileFeedbackType;
@property (strong, nonatomic, setter=_setFileURL:) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (strong, nonatomic, setter=_setHapticParameters:) _UIFeedbackParameters *hapticParameters; // @synthesize hapticParameters=_hapticParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

