//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSData, NSString, SYMessageHeader;

@interface SYStartSyncSession : PBCodable <NSCopying>
{
    double _sessionTimeout;
    SYMessageHeader *_header;
    NSData *_metadata;
    NSString *_reason;
    NSString *_sessionID;
    BOOL _expectsRestartSupport;
    BOOL _expectsRollbackSupport;
    BOOL _isResetSync;
}

@property (nonatomic) BOOL expectsRestartSupport; // @synthesize expectsRestartSupport=_expectsRestartSupport;
@property (nonatomic) BOOL expectsRollbackSupport; // @synthesize expectsRollbackSupport=_expectsRollbackSupport;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasReason;
@property (strong, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
@property (nonatomic) BOOL isResetSync; // @synthesize isResetSync=_isResetSync;
@property (strong, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (strong, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;

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

