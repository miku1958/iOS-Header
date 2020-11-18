//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject
{
    NSArray *_sortedAlbums;
    NSArray *_sortedArtists;
    NSArray *_sortedTitles;
    NSArray *_sortedGenres;
    NSArray *_sortedSources;
    NSArray *_sortedSessions;
    double _maxDurationInSeconds;
    double _minDurationInSeconds;
}

@property (readonly, nonatomic) double maxDurationInSeconds; // @synthesize maxDurationInSeconds=_maxDurationInSeconds;
@property (readonly, nonatomic) double minDurationInSeconds; // @synthesize minDurationInSeconds=_minDurationInSeconds;
@property (readonly, nonatomic) NSArray *sortedAlbums; // @synthesize sortedAlbums=_sortedAlbums;
@property (readonly, nonatomic) NSArray *sortedArtists; // @synthesize sortedArtists=_sortedArtists;
@property (readonly, nonatomic) NSArray *sortedGenres; // @synthesize sortedGenres=_sortedGenres;
@property (readonly, nonatomic) NSArray *sortedSessions; // @synthesize sortedSessions=_sortedSessions;
@property (readonly, nonatomic) NSArray *sortedSources; // @synthesize sortedSources=_sortedSources;
@property (readonly, nonatomic) NSArray *sortedTitles; // @synthesize sortedTitles=_sortedTitles;

- (void).cxx_destruct;
- (void)computeStatistics;
- (id)initWithNowPlayingStreamSessions:(id)arg1;
- (void)logStatistics;

@end
