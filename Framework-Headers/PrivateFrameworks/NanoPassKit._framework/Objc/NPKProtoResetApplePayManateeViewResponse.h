//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoResetApplePayManateeViewResponse : PBCodable <NSCopying>
{
    NSData *_errorData;
    BOOL _pending;
    BOOL _success;
    CDStruct_5ee4970e _has;
}

@property (strong, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (nonatomic) BOOL success; // @synthesize success=_success;

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

