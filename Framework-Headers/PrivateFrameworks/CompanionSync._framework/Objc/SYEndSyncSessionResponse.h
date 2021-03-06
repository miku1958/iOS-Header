//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYEndSyncSessionResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;
    SYMessageHeader *_header;
    NSString *_sessionID;
    BOOL _didRollback;
    struct {
        unsigned int didRollback:1;
    } _has;
}

@property (nonatomic) BOOL didRollback; // @synthesize didRollback=_didRollback;
@property (strong, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property (nonatomic) BOOL hasDidRollback;
@property (readonly, nonatomic) BOOL hasError;
@property (strong, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
@property (strong, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;

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

