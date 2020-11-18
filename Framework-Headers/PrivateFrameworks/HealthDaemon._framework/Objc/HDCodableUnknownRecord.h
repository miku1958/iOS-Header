//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalRecord, NSString;

@interface HDCodableUnknownRecord : PBCodable <HDDecoding, NSCopying>
{
    NSString *_displayName;
    HDCodableMedicalRecord *_medicalRecord;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (BOOL)applyToObject:(id)arg1 error:(out id *)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
