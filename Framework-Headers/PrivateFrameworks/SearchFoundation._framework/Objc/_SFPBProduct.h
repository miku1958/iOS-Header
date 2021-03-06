//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBProduct-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBProduct : PBCodable <_SFPBProduct, NSSecureCoding>
{
    BOOL _buyable;
    NSString *_identifier;
    NSString *_productIdentifier;
    _SFPBURL *_availabilityURL;
    NSString *_displayName;
}

@property (strong, nonatomic) _SFPBURL *availabilityURL; // @synthesize availabilityURL=_availabilityURL;
@property (nonatomic) BOOL buyable; // @synthesize buyable=_buyable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

