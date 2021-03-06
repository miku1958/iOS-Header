//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>
{
    NSMutableArray *_domains;
}

@property (strong, nonatomic) NSMutableArray *domains; // @synthesize domains=_domains;

+ (Class)domainsType;
- (void).cxx_destruct;
- (void)addDomains:(id)arg1;
- (void)clearDomains;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

