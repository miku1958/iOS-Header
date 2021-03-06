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
    NSString *_appIdentifier;
    int _certified;
    NSMutableArray *_characteristics;
    unsigned int _consecutiveFailureCount;
    unsigned int _duration;
    int _errorCode;
    NSString *_primaryServiceType;
    int _source;
    unsigned int _timeElapsedSinceFirstFailure;
    NSString *_transaction;
    NSString *_transportProtocolVersion;
    int _transportType;
    unsigned int _underlyingErrorCode;
    NSString *_underlyingErrorDomain;
    AWDHomeKitVendorInformation *_vendorDetails;
    BOOL _isCached;
    BOOL _isNoeAccessory;
    BOOL _isRemote;
    BOOL _isRemoteAccessAllowed;
    BOOL _isRemotelyReachable;
    BOOL _isResidentAvailable;
    BOOL _isSentOverNoe;
    BOOL _isTimedWrite;
    BOOL _isWrite;
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int consecutiveFailureCount:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int source:1;
        unsigned int timeElapsedSinceFirstFailure:1;
        unsigned int transportType:1;
        unsigned int underlyingErrorCode:1;
        unsigned int isCached:1;
        unsigned int isNoeAccessory:1;
        unsigned int isRemote:1;
        unsigned int isRemoteAccessAllowed:1;
        unsigned int isRemotelyReachable:1;
        unsigned int isResidentAvailable:1;
        unsigned int isSentOverNoe:1;
        unsigned int isTimedWrite:1;
        unsigned int isWrite:1;
    } _has;
}

@property (strong, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property (nonatomic) int certified; // @synthesize certified=_certified;
@property (strong, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
@property (nonatomic) unsigned int consecutiveFailureCount; // @synthesize consecutiveFailureCount=_consecutiveFailureCount;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (nonatomic) BOOL hasCertified;
@property (nonatomic) BOOL hasConsecutiveFailureCount;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsCached;
@property (nonatomic) BOOL hasIsNoeAccessory;
@property (nonatomic) BOOL hasIsRemote;
@property (nonatomic) BOOL hasIsRemoteAccessAllowed;
@property (nonatomic) BOOL hasIsRemotelyReachable;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL hasIsSentOverNoe;
@property (nonatomic) BOOL hasIsTimedWrite;
@property (nonatomic) BOOL hasIsWrite;
@property (readonly, nonatomic) BOOL hasPrimaryServiceType;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimeElapsedSinceFirstFailure;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (readonly, nonatomic) BOOL hasTransportProtocolVersion;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasUnderlyingErrorDomain;
@property (readonly, nonatomic) BOOL hasVendorDetails;
@property (nonatomic) BOOL isCached; // @synthesize isCached=_isCached;
@property (nonatomic) BOOL isNoeAccessory; // @synthesize isNoeAccessory=_isNoeAccessory;
@property (nonatomic) BOOL isRemote; // @synthesize isRemote=_isRemote;
@property (nonatomic) BOOL isRemoteAccessAllowed; // @synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed;
@property (nonatomic) BOOL isRemotelyReachable; // @synthesize isRemotelyReachable=_isRemotelyReachable;
@property (nonatomic) BOOL isResidentAvailable; // @synthesize isResidentAvailable=_isResidentAvailable;
@property (nonatomic) BOOL isSentOverNoe; // @synthesize isSentOverNoe=_isSentOverNoe;
@property (nonatomic) BOOL isTimedWrite; // @synthesize isTimedWrite=_isTimedWrite;
@property (nonatomic) BOOL isWrite; // @synthesize isWrite=_isWrite;
@property (strong, nonatomic) NSString *primaryServiceType; // @synthesize primaryServiceType=_primaryServiceType;
@property (nonatomic) int source; // @synthesize source=_source;
@property (nonatomic) unsigned int timeElapsedSinceFirstFailure; // @synthesize timeElapsedSinceFirstFailure=_timeElapsedSinceFirstFailure;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *transaction; // @synthesize transaction=_transaction;
@property (strong, nonatomic) NSString *transportProtocolVersion; // @synthesize transportProtocolVersion=_transportProtocolVersion;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property (strong, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property (strong, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;

+ (Class)characteristicsType;
- (void).cxx_destruct;
- (int)StringAsCertified:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addCharacteristics:(id)arg1;
- (id)certifiedAsString:(int)arg1;
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
- (id)sourceAsString:(int)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

