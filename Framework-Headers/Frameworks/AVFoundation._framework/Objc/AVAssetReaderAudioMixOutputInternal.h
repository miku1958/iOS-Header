//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioMix, AVAudioOutputSettings, NSArray, NSMutableDictionary, NSString;

@interface AVAssetReaderAudioMixOutputInternal : NSObject
{
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioVolumeCurvesForTracks;
    NSMutableDictionary *audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}

@end
