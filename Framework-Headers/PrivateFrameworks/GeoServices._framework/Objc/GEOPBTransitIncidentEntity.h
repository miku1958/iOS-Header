//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitIncidentEntity-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>
{
    unsigned long long _affectedMuid;
    int _entityType;
    struct {
        unsigned int affectedMuid:1;
        unsigned int entityType:1;
    } _has;
}

@property (nonatomic) unsigned long long affectedMuid; // @synthesize affectedMuid=_affectedMuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (nonatomic) BOOL hasAffectedMuid;
@property (nonatomic) BOOL hasEntityType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly) Class superclass;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

