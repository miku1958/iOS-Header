//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBStringDictionary-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding>
{
    NSArray *_keyValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *keyValues; // @synthesize keyValues=_keyValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addKeyValues:(id)arg1;
- (void)clearKeyValues;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithNSDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

