//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable
{
    BOOL _personalDomainsSetup;
    BOOL _appleMusicSubscriber;
}

@property (nonatomic) BOOL appleMusicSubscriber; // @synthesize appleMusicSubscriber=_appleMusicSubscriber;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL personalDomainsSetup; // @synthesize personalDomainsSetup=_personalDomainsSetup;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
