//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>
{
    NSMutableArray *_cryptoSessions;
}

@property (strong, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;

+ (Class)cryptoSessionsType;
- (void).cxx_destruct;
- (void)addCryptoSessions:(id)arg1;
- (void)clearCryptoSessions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cryptoSessionsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
