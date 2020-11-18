//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying>
{
    int _assertionType;
    NSString *_requestUUIDString;
    BOOL _pending;
    struct {
        unsigned int assertionType:1;
        unsigned int pending:1;
    } _has;
}

@property (nonatomic) int assertionType; // @synthesize assertionType=_assertionType;
@property (nonatomic) BOOL hasAssertionType;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (strong, nonatomic) NSString *requestUUIDString; // @synthesize requestUUIDString=_requestUUIDString;

- (void).cxx_destruct;
- (int)StringAsAssertionType:(id)arg1;
- (id)assertionTypeAsString:(int)arg1;
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
