//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLSRegionsAgglomerativeClusteringDataCluster : NSObject
{
    NSArray *_vectors;
    double _latitude;
    double _longitude;
    double _radius;
    double _score;
}

@property (nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (nonatomic) double radius; // @synthesize radius=_radius;
@property (nonatomic) double score; // @synthesize score=_score;
@property (readonly) NSArray *vectors; // @synthesize vectors=_vectors;

+ (id)dataClusterWithDataVector:(id)arg1;
+ (id)mergedClusterFrom:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDataVector:(id)arg1;

@end

