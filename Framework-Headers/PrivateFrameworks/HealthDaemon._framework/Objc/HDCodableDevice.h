//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableDevice : PBCodable <NSCopying>
{
    double _creationDate;
    NSString *_fDAUDI;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    NSString *_localIdentifier;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    NSString *_softwareVersion;
    NSData *_uuid;
    CDStruct_dc48a425 _has;
}

@property (nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) NSString *fDAUDI; // @synthesize fDAUDI=_fDAUDI;
@property (strong, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (strong, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasFDAUDI;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (readonly, nonatomic) BOOL hasHardwareVersion;
@property (readonly, nonatomic) BOOL hasLocalIdentifier;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (readonly, nonatomic) BOOL hasUuid;
@property (strong, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property (strong, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (strong, nonatomic) NSString *model; // @synthesize model=_model;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property (strong, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

