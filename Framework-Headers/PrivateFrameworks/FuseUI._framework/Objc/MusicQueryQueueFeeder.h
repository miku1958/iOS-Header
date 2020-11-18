//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaQueryQueueFeeder.h>

@class MPMediaPlaylist;

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder
{
}

@property (strong, nonatomic) MPMediaPlaylist *mixPlaylist;

+ (Class)playbackItemMetadataClass;
+ (BOOL)supportsStateRestoration;
- (id)errorResolverForItem:(id)arg1;
- (Class)itemClass;
- (id)playbackInfoForIdentifier:(id)arg1;
- (unsigned long long)realRepeatType;
- (unsigned long long)realShuffleType;

@end
