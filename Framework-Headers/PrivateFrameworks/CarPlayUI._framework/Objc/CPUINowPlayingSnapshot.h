//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, MPCPlayerResponse, MPCPlayerResponseItem, MPCPlayerResponseTracklist, MPModelSong, NSNumber, NSString;

@interface CPUINowPlayingSnapshot : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    MPArtworkCatalog *_artworkCatalog;
    long long _state;
    MPCPlayerResponseTracklist *_tracklist;
    MPModelSong *_song;
    MPCPlayerResponse *_response;
    MPCPlayerResponseItem *_responseItem;
    CDStruct_fce57115 _durationSnapshot;
}

@property (readonly, nonatomic) NSString *album; // @synthesize album=_album;
@property (readonly, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property (readonly, nonatomic) NSNumber *jumpBackInterval;
@property (readonly, nonatomic) NSNumber *jumpForwardInterval;
@property (readonly, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property (readonly, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property (readonly, nonatomic) BOOL shouldEnableBackButton;
@property (readonly, nonatomic) BOOL shouldEnableNextButton;
@property (readonly, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist; // @synthesize tracklist=_tracklist;

+ (id)knownJumpIntervals;
- (void).cxx_destruct;
- (id)commandWithType:(unsigned long long)arg1;
- (id)initWithResponse:(id)arg1;

@end
