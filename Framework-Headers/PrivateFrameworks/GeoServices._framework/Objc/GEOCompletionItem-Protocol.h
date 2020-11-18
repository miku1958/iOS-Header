//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEODirectionIntent, GEOMapItemIdentifier, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, NSArray, NSData, NSString;
@protocol GEOMapItem;

@protocol GEOCompletionItem <NSObject>

@property (readonly, nonatomic) GEOResolvedItem *clientResolved;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) float disambiguationRadiusMeters;
@property (readonly, nonatomic) NSArray *displayLines;
@property (readonly, nonatomic) NSData *entryMetadata;
@property (readonly, nonatomic) id<GEOMapItem> geoMapItem;
@property (readonly, nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (readonly, nonatomic) GEOSearchCategory *searchCategory;
@property (readonly, nonatomic) long long type;

- (NSString *)calloutTitle;
- (BOOL)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
- (NSString *)queryLine;
- (void)sendFeedback;
@end
