//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ICPBDGSFinishDelegationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_playerDelegateInfoTokens;
}

@property (strong, nonatomic) NSMutableArray *playerDelegateInfoTokens; // @synthesize playerDelegateInfoTokens=_playerDelegateInfoTokens;

+ (Class)playerDelegateInfoTokenType;
- (void).cxx_destruct;
- (void)addPlayerDelegateInfoToken:(id)arg1;
- (void)clearPlayerDelegateInfoTokens;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerDelegateInfoTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)playerDelegateInfoTokensCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

