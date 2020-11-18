//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation, NSMutableArray, NSString;

@interface AWDHomeKitAccessoryReadWrite : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_characteristics;
    unsigned int _duration;
    int _errorCode;
    NSString *_transaction;
    int _transportType;
    AWDHomeKitVendorInformation *_vendorDetails;
    BOOL _isRemote;
    BOOL _isWrite;
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int transportType:1;
        unsigned int isRemote:1;
        unsigned int isWrite:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL hasIsWrite;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (nonatomic) BOOL hasTransportType;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) BOOL isRemote; // @synthesize isRemote=_isRemote;
@property (nonatomic) BOOL isWrite; // @synthesize isWrite=_isWrite;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *transaction; // @synthesize transaction=_transaction;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (strong, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;

+ (Class)characteristicsType;
- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addCharacteristics:(id)arg1;
- (id)characteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
