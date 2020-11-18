//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEONameInfo, GEONameInfoList, NSMutableArray;

@protocol GEOCompanionManeuverStep <NSObject>

@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly, nonatomic) CDStruct_e02beb0c *junctionElements;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (nonatomic) int junctionType;
@property (strong, nonatomic) NSMutableArray *maneuverNames;
@property (nonatomic) int maneuverType;
@property (strong, nonatomic) NSMutableArray *signposts;
@property (readonly, nonatomic) int transportType;

- (void)addManeuverName:(GEONameInfoList *)arg1;
- (void)addSignpost:(GEONameInfo *)arg1;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (GEONameInfoList *)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (GEONameInfo *)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
@end

