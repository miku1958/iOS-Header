//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableFHIRIdentifier, HDCodableSample, HDCodableSemanticDate, NSString;

@interface HDCodableMedicalRecord : PBCodable <HDDecoding, NSCopying>
{
    long long _extractionVersion;
    double _modifiedDate;
    HDCodableFHIRIdentifier *_fHIRIdentifier;
    NSString *_note;
    HDCodableSample *_sample;
    HDCodableSemanticDate *_sortDate;
    BOOL _enteredInError;
    struct {
        unsigned int extractionVersion:1;
        unsigned int modifiedDate:1;
        unsigned int enteredInError:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enteredInError; // @synthesize enteredInError=_enteredInError;
@property (nonatomic) long long extractionVersion; // @synthesize extractionVersion=_extractionVersion;
@property (strong, nonatomic) HDCodableFHIRIdentifier *fHIRIdentifier; // @synthesize fHIRIdentifier=_fHIRIdentifier;
@property (nonatomic) BOOL hasEnteredInError;
@property (nonatomic) BOOL hasExtractionVersion;
@property (readonly, nonatomic) BOOL hasFHIRIdentifier;
@property (nonatomic) BOOL hasModifiedDate;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly, nonatomic) BOOL hasSortDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property (strong, nonatomic) NSString *note; // @synthesize note=_note;
@property (strong, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
@property (strong, nonatomic) HDCodableSemanticDate *sortDate; // @synthesize sortDate=_sortDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

