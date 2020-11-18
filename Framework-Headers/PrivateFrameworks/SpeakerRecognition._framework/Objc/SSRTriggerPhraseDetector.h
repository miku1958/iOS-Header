//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSRTriggerPhraseDetectorNDAPI, SSRTriggerPhraseDetectorQuasar;

@interface SSRTriggerPhraseDetector : NSObject
{
    float _recognizerScoreScaleFactor;
    SSRTriggerPhraseDetectorNDAPI *_detectorNDAPI;
    SSRTriggerPhraseDetectorQuasar *_detectorQuasar;
}

@property (strong, nonatomic) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI; // @synthesize detectorNDAPI=_detectorNDAPI;
@property (strong, nonatomic) SSRTriggerPhraseDetectorQuasar *detectorQuasar; // @synthesize detectorQuasar=_detectorQuasar;
@property (nonatomic) float recognizerScoreScaleFactor; // @synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor;

+ (id)filterVTAudioFiles:(id)arg1 withLocale:(id)arg2 withAsset:(id)arg3;
- (void).cxx_destruct;
- (void)computeTriggerConfidenceForAudio:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithLocale:(id)arg1 asset:(id)arg2;

@end
