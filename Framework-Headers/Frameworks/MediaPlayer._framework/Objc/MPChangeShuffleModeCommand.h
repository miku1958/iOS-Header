//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangeShuffleModeCommand : MPRemoteCommand
{
    long long _currentShuffleType;
}

@property (nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;

- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(BOOL)arg2;

@end
