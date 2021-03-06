//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARQueryFeatures_Stats-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARQueryFeatures_Stats : PBCodable <_PARQueryFeatures_Stats, NSSecureCoding>
{
    NSArray *_Ceps;
    NSArray *_CepLongs;
}

@property (copy, nonatomic) NSArray *CepLongs; // @synthesize CepLongs=_CepLongs;
@property (copy, nonatomic) NSArray *Ceps; // @synthesize Ceps=_Ceps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CepAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepCount;
- (id)CepLongAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepLongCount;
- (void)addCep:(id)arg1;
- (void)addCepLong:(id)arg1;
- (void)clearCep;
- (void)clearCepLong;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCep:(id)arg1;
- (void)setCepLong:(id)arg1;
- (void)writeTo:(id)arg1;

@end

