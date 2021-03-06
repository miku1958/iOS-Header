//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelArtist, MPModelPlaylist, MPModelRadioStation, NSDate, NSString;

@interface MPModelPlayEvent : MPModelObject
{
}

@property (strong, nonatomic) MPModelAlbum *album; // @dynamic album;
@property (strong, nonatomic) MPModelArtist *artist; // @dynamic artist;
@property (copy, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
@property (strong, nonatomic) MPModelPlaylist *playlist; // @dynamic playlist;
@property (strong, nonatomic) MPModelRadioStation *radioStation; // @dynamic radioStation;
@property (readonly, copy, nonatomic) NSString *title;

+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__datePlayed_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
- (id)contentItemCollectionInfo;
- (id)genericObjectRepresentation;
- (long long)itemType;

@end

