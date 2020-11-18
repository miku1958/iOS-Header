//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCopyFileIntentResponse-Protocol.h>

@class NSString, _INPBString;

@interface _INPBCopyFileIntentResponse : PBCodable <_INPBCopyFileIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_be739ab4 _has;
    BOOL _overwrite;
    BOOL _success;
    int _entityType;
    _INPBString *_destinationName;
    _INPBString *_entityName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBString *destinationName; // @synthesize destinationName=_destinationName;
@property (strong, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) BOOL hasOverwrite;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL overwrite; // @synthesize overwrite=_overwrite;
@property (nonatomic) BOOL success; // @synthesize success=_success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)entityTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

