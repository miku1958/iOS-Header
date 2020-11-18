//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@interface ISFilteredAVPlayer : AVPlayer
{
    BOOL _filterEnabled;
    float _filterSweepValue;
}

@property (nonatomic, getter=isFilterEnabled) BOOL filterEnabled; // @synthesize filterEnabled=_filterEnabled;
@property (nonatomic) float filterSweepValue; // @synthesize filterSweepValue=_filterSweepValue;

- (void)_updateAudioMix;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;

@end

