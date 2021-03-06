//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNetworkEventGroup : PBCodable <NSCopying>
{
    NSString *_respondingInstance;
    NSString *_via;
}

@property (readonly, nonatomic) BOOL hasRespondingInstance;
@property (readonly, nonatomic) BOOL hasVia;
@property (strong, nonatomic) NSString *respondingInstance; // @synthesize respondingInstance=_respondingInstance;
@property (strong, nonatomic) NSString *via; // @synthesize via=_via;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

