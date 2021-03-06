//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSNumber, NSString, WLKArtworkVariantListing, WLKPlayable;

@interface WLKBasicEpisodeMetadata : WLKBasicContentMetadata
{
    NSString *_showTitle;
    NSString *_canonicalShowID;
    NSString *_canonicalSeasonID;
    NSNumber *_seasonNumber;
    NSNumber *_episodeNumber;
    double _duration;
    NSDate *_releaseDate;
    WLKArtworkVariantListing *_showImages;
    WLKArtworkVariantListing *_seasonImages;
    WLKPlayable *_playable;
}

@property (readonly, copy, nonatomic) NSString *canonicalSeasonID; // @synthesize canonicalSeasonID=_canonicalSeasonID;
@property (readonly, copy, nonatomic) NSString *canonicalShowID; // @synthesize canonicalShowID=_canonicalShowID;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property (readonly, nonatomic) WLKPlayable *playable; // @synthesize playable=_playable;
@property (readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property (readonly, nonatomic) WLKArtworkVariantListing *seasonImages; // @synthesize seasonImages=_seasonImages;
@property (readonly, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property (readonly, nonatomic) WLKArtworkVariantListing *showImages; // @synthesize showImages=_showImages;
@property (readonly, copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;

+ (id)episodesWithDictionaries:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end

