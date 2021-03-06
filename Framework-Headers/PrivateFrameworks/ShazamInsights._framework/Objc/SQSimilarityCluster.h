//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SQSimilarityCluster : NSObject
{
    long long _clusterType;
    NSArray *_mediaItems;
    NSString *_clusterID;
    NSArray *_genres;
    long long _cohesionLevel;
}

@property (copy, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property (nonatomic) long long clusterType; // @synthesize clusterType=_clusterType;
@property (nonatomic) long long cohesionLevel; // @synthesize cohesionLevel=_cohesionLevel;
@property (copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property (strong, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;

+ (id)clusterOfType:(long long)arg1;
- (void).cxx_destruct;
- (void)appendMediaItem:(id)arg1;

@end

