//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _handlerReturnStatus;
    unsigned int _errorCode;
    CDStruct_70a7dc3e _has;
}

@property (nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property (readonly, nonatomic) unsigned int *handlerReturnStatus;
@property (readonly, nonatomic) unsigned long long handlerReturnStatusCount;
@property (nonatomic) BOOL hasErrorCode;

- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)clearHandlerReturnStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHandlerReturnStatus:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
