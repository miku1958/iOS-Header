//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying>
{
    long long _timeIntervalSinceLastOperation;
    unsigned long long _timestamp;
    int _deviceClass;
    int _errorCount;
    int _operationType;
    int _qualityOfService;
    int _recordsChanged;
    struct {
        unsigned int timeIntervalSinceLastOperation:1;
        unsigned int timestamp:1;
        unsigned int deviceClass:1;
        unsigned int errorCount:1;
        unsigned int operationType:1;
        unsigned int qualityOfService:1;
        unsigned int recordsChanged:1;
    } _has;
}

@property (nonatomic) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property (nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasErrorCount;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) BOOL hasRecordsChanged;
@property (nonatomic) BOOL hasTimeIntervalSinceLastOperation;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int operationType; // @synthesize operationType=_operationType;
@property (nonatomic) int qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (nonatomic) int recordsChanged; // @synthesize recordsChanged=_recordsChanged;
@property (nonatomic) long long timeIntervalSinceLastOperation; // @synthesize timeIntervalSinceLastOperation=_timeIntervalSinceLastOperation;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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
