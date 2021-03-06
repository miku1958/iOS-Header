//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeEntity-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBString;

@interface _INPBHomeEntity : PBCodable <_INPBHomeEntity, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _deviceTypes;
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
        unsigned int sceneType:1;
    } _has;
    int _deviceType;
    int _entityType;
    int _sceneType;
    NSString *_entityIdentifier;
    _INPBDataString *_entityName;
    _INPBDataString *_group;
    _INPBDataString *_home;
    _INPBString *_name;
    _INPBDataString *_room;
    _INPBDataString *_zone;
    NSArray *_zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property (readonly, nonatomic) int *deviceTypes;
@property (readonly, nonatomic) unsigned long long deviceTypesCount;
@property (copy, nonatomic) NSString *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property (strong, nonatomic) _INPBDataString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (strong, nonatomic) _INPBDataString *group; // @synthesize group=_group;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasGroup;
@property (readonly, nonatomic) BOOL hasHome;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasRoom;
@property (nonatomic) BOOL hasSceneType;
@property (readonly, nonatomic) BOOL hasZone;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBDataString *home; // @synthesize home=_home;
@property (strong, nonatomic) _INPBString *name; // @synthesize name=_name;
@property (strong, nonatomic) _INPBDataString *room; // @synthesize room=_room;
@property (nonatomic) int sceneType; // @synthesize sceneType=_sceneType;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBDataString *zone; // @synthesize zone=_zone;
@property (copy, nonatomic) NSArray *zones; // @synthesize zones=_zones;
@property (readonly, nonatomic) unsigned long long zonesCount;

+ (BOOL)supportsSecureCoding;
+ (Class)zonesType;
- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (int)StringAsDeviceTypes:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsSceneType:(id)arg1;
- (void)addDeviceTypes:(int)arg1;
- (void)addZones:(id)arg1;
- (void)clearDeviceTypes;
- (void)clearZones;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)deviceTypeAsString:(int)arg1;
- (id)deviceTypesAsString:(int)arg1;
- (int)deviceTypesAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sceneTypeAsString:(int)arg1;
- (void)setDeviceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;
- (id)zonesAtIndex:(unsigned long long)arg1;

@end

