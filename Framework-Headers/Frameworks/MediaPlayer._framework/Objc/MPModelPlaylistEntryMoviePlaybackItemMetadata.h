//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelMoviePlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata
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
- (id)movie;
- (void)setMovie:(id)arg1;

@end
