//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject
{
    CDStruct_912cb5d2 *_vertices;
    NSMutableArray *_trafficSegments;
    NSArray *_trafficIncidents;
    double _expirationTime;
}

@property (nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property (readonly, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property (strong, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property (nonatomic) CDStruct_912cb5d2 *vertices; // @synthesize vertices=_vertices;

+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
+ (double)expirationTimeInterval;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;

@end

