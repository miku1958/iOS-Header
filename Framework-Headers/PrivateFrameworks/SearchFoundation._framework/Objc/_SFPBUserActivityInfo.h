//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserActivityInfo-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBUserActivityInfo : PBCodable <_SFPBUserActivityInfo, NSSecureCoding>
{
    int _valueType;
    NSString *_key;
    NSString *_stringValue;
    _SFPBURL *_urlValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
@property (nonatomic) int valueType; // @synthesize valueType=_valueType;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
