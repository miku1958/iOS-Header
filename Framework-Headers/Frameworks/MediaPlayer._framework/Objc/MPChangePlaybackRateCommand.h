//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand
{
    float _preferredRate;
    NSArray *_supportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPlaybackRate:(float)arg1;
- (float)preferredRate;
- (void)setPreferredRate:(float)arg1;

@end

