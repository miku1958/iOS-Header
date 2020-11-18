//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>
{
    NSMutableArray *_accessPoints;
    NSMutableArray *_locations;
    CLPPoiTriggerEvent *_triggerEvent;
}

@property (strong, nonatomic) NSMutableArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property (strong, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property (strong, nonatomic) CLPPoiTriggerEvent *triggerEvent; // @synthesize triggerEvent=_triggerEvent;

+ (Class)accessPointsType;
+ (Class)locationsType;
- (void).cxx_destruct;
- (id)accessPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoints:(id)arg1;
- (void)addLocations:(id)arg1;
- (void)clearAccessPoints;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

