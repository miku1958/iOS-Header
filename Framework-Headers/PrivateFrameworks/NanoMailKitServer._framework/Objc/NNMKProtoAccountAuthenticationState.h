//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying>
{
    NSString *_accountId;
    unsigned int _standaloneState;
    struct {
        unsigned int standaloneState:1;
    } _has;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (readonly, nonatomic) BOOL hasAccountId;
@property (nonatomic) BOOL hasStandaloneState;
@property (nonatomic) unsigned int standaloneState; // @synthesize standaloneState=_standaloneState;

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

