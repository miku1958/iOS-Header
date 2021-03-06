//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/DCURLGenerator.h>

@class DCMapsLink, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DCMapsURLGenerator : DCURLGenerator
{
    NSMutableDictionary *_queryDictionary;
    DCMapsLink *_mapsLink;
}

@property (readonly, nonatomic) DCMapsLink *mapsLink; // @synthesize mapsLink=_mapsLink;
@property (readonly, nonatomic) NSMutableDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;

+ (id)URLWithMapsLink:(id)arg1;
- (void).cxx_destruct;
- (id)URL;
- (id)directionsMode;
- (id)host;
- (id)initWithMapsLink:(id)arg1;
- (id)mapType;
- (id)path;
- (void)populateQueryDictionary;
- (id)query;
- (id)scheme;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;

@end

