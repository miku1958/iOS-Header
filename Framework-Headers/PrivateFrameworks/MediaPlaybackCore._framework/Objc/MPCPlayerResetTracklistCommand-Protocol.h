//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlaybackIntent, MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>

@property (readonly, nonatomic) NSArray *specializedIntents;

- (MPCPlayerCommandRequest *)clear;
- (MPCPlayerCommandRequest *)clearUpNextItems;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
@end

