//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Message/NSCopying-Protocol.h>

@interface AWDMailError : PBCodable <NSCopying>
{
    long long _genericErrorCode;
    int _errorCode;
    struct {
        unsigned int genericErrorCode:1;
        unsigned int errorCode:1;
    } _has;
}

@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) long long genericErrorCode; // @synthesize genericErrorCode=_genericErrorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasGenericErrorCode;

- (int)StringAsErrorCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCodeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

