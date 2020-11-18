//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBCard, _SFPBCardSectionValue, _SFPBUserReportRequest;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding>
{
    int _type;
    _SFPBCardSectionValue *_value;
    _SFPBCard *_nextCard;
    NSArray *_commands;
    NSArray *_parameterKeyPaths;
    NSString *_cardSectionId;
    NSString *_resultIdentifier;
    _SFPBUserReportRequest *_userReportRequest;
}

@property (copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property (copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBCard *nextCard; // @synthesize nextCard=_nextCard;
@property (copy, nonatomic) NSArray *parameterKeyPaths; // @synthesize parameterKeyPaths=_parameterKeyPaths;
@property (copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) int type; // @synthesize type=_type;
@property (strong, nonatomic) _SFPBUserReportRequest *userReportRequest; // @synthesize userReportRequest=_userReportRequest;
@property (strong, nonatomic) _SFPBCardSectionValue *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)addCommands:(id)arg1;
- (void)addParameterKeyPaths:(id)arg1;
- (void)clearCommands;
- (void)clearParameterKeyPaths;
- (id)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithSFCardSection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

