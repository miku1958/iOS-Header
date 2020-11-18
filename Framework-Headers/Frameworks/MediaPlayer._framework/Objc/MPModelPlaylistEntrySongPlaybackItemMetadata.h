//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata
{
    MPModelGenericObject *_modelGenericObject;
    MPModelPlaylistEntry *_playlistEntry;
}

@property (strong, nonatomic) MPModelPlaylistEntry *playlistEntry; // @synthesize playlistEntry=_playlistEntry;

+ (id)requiredProperties;
- (void).cxx_destruct;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)modelGenericObject;
- (void)setSong:(id)arg1;
- (id)song;

@end
