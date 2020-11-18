//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDSpringBoardSOSAlertResponse : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_response;
    NSString *_uUID;
    CDStruct_b5306035 _has;
}

@property (readonly, nonatomic) BOOL hasResponse;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUUID;
@property (strong, nonatomic) NSString *response; // @synthesize response=_response;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSString *uUID; // @synthesize uUID=_uUID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

