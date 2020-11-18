//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPayloadNeedsDisambiguation-Protocol.h>

@class NSArray, NSString;

@interface _INPBPayloadNeedsDisambiguation : PBCodable <_INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_disambiguationItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *disambiguationItems; // @synthesize disambiguationItems=_disambiguationItems;
@property (readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)disambiguationItemsType;
- (void).cxx_destruct;
- (void)addDisambiguationItems:(id)arg1;
- (void)clearDisambiguationItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

