//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject
{
    void *_mediaRemoteLyricsItem;
}

@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) void *mediaRemoteLyricsItem; // @synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem;
@property (readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property (readonly, nonatomic) BOOL userProvided;

- (void)dealloc;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2;
- (id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3;
- (id)initWithMediaRemoteLyricsItem:(void *)arg1;

@end

