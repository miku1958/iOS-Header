//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaViewContainer;

@interface SISchemaPunchOut : PBCodable
{
    NSString *_appID;
    NSString *_urlScheme;
    SISchemaViewContainer *_viewContainer;
    NSData *_viewElementID;
}

@property (copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property (strong, nonatomic) SISchemaViewContainer *viewContainer; // @synthesize viewContainer=_viewContainer;
@property (copy, nonatomic) NSData *viewElementID; // @synthesize viewElementID=_viewElementID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
