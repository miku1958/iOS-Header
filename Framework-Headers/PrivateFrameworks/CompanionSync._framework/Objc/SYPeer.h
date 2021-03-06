//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString;

@interface SYPeer : PBCodable <NSCopying>
{
    NSString *_generationID;
    NSString *_peerID;
}

@property (strong, nonatomic) NSString *generationID; // @synthesize generationID=_generationID;
@property (readonly, nonatomic) BOOL hasGenerationID;
@property (strong, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithPeerID:(id)arg1 generation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

