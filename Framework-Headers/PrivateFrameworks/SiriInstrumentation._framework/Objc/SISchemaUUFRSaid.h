//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaSiriResponseContext;

@interface SISchemaUUFRSaid : PBCodable
{
    NSString *_dialogIdentifier;
    SISchemaSiriResponseContext *_siriResponseContext;
    NSString *_aceViewID;
    NSString *_aceViewClass;
    BOOL _hasDialogIdentifier;
    BOOL _hasSiriResponseContext;
    BOOL _hasAceViewID;
    BOOL _hasAceViewClass;
}

@property (copy, nonatomic) NSString *aceViewClass; // @synthesize aceViewClass=_aceViewClass;
@property (copy, nonatomic) NSString *aceViewID; // @synthesize aceViewID=_aceViewID;
@property (copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
@property (nonatomic) BOOL hasAceViewClass; // @synthesize hasAceViewClass=_hasAceViewClass;
@property (nonatomic) BOOL hasAceViewID; // @synthesize hasAceViewID=_hasAceViewID;
@property (nonatomic) BOOL hasDialogIdentifier; // @synthesize hasDialogIdentifier=_hasDialogIdentifier;
@property (nonatomic) BOOL hasSiriResponseContext; // @synthesize hasSiriResponseContext=_hasSiriResponseContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // @synthesize siriResponseContext=_siriResponseContext;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

