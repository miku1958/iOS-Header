//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SPProtoAudioFilePlayerStatus : PBCodable <NSCopying>
{
    long long _errorCode;
    NSData *_errorDict;
    NSString *_errorDomain;
    NSString *_identifier;
    int _status;
    struct {
        unsigned int errorCode:1;
        unsigned int status:1;
    } _has;
}

@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property (strong, nonatomic) NSData *errorDict; // @synthesize errorDict=_errorDict;
@property (strong, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDict;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) int status; // @synthesize status=_status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sockPuppetMessageForPlayerItemSetStatus;
- (id)sockPuppetMessageForQueuePlayerSetStatus;
- (void)writeTo:(id)arg1;

@end
