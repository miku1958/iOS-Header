//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreCDPInternal/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreCDPPiggyBack : PBCodable <NSCopying>
{
    long long _errorCode;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    BOOL _success;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property (strong, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL success; // @synthesize success=_success;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

