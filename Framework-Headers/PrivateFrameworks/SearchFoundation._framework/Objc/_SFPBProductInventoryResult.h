//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBProductInventoryResult-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding>
{
    NSString *_productIdentifier;
    NSArray *_availabilitys;
}

@property (copy, nonatomic) NSArray *availabilitys; // @synthesize availabilitys=_availabilitys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAvailability:(id)arg1;
- (id)availabilityAtIndex:(unsigned long long)arg1;
- (unsigned long long)availabilityCount;
- (void)clearAvailability;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailability:(id)arg1;
- (void)writeTo:(id)arg1;

@end

