//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying>
{
    NSMutableArray *_accountsStatus;
}

@property (strong, nonatomic) NSMutableArray *accountsStatus; // @synthesize accountsStatus=_accountsStatus;

+ (Class)accountsStatusType;
- (void).cxx_destruct;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)arg1;
- (void)clearAccountsStatus;
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

