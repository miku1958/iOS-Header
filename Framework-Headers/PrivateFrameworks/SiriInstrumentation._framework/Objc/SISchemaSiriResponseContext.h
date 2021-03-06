//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaSiriResponseContext : PBCodable
{
    NSString *_dialogPhase;
    int _presentationType;
    int _siriResponseMode;
    struct {
        unsigned int presentationType:1;
        unsigned int siriResponseMode:1;
    } _has;
    BOOL _hasDialogPhase;
}

@property (copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
@property (nonatomic) BOOL hasDialogPhase; // @synthesize hasDialogPhase=_hasDialogPhase;
@property (nonatomic) BOOL hasPresentationType;
@property (nonatomic) BOOL hasSiriResponseMode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int presentationType; // @synthesize presentationType=_presentationType;
@property (nonatomic) int siriResponseMode; // @synthesize siriResponseMode=_siriResponseMode;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

