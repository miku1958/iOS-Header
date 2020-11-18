//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaDeviceFixedContext : PBCodable
{
    NSString *_deviceType;
    NSString *_systemBuild;
    NSString *_siriInputLanguage;
    NSString *_siriVoiceLanguage;
    NSString *_systemLocale;
    NSString *_siriDeviceID;
    NSString *_speechID;
}

@property (copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *siriDeviceID; // @synthesize siriDeviceID=_siriDeviceID;
@property (copy, nonatomic) NSString *siriInputLanguage; // @synthesize siriInputLanguage=_siriInputLanguage;
@property (copy, nonatomic) NSString *siriVoiceLanguage; // @synthesize siriVoiceLanguage=_siriVoiceLanguage;
@property (copy, nonatomic) NSString *speechID; // @synthesize speechID=_speechID;
@property (copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property (copy, nonatomic) NSString *systemLocale; // @synthesize systemLocale=_systemLocale;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
