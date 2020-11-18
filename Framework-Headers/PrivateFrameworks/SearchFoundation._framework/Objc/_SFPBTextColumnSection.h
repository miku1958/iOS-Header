//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumnSection-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>
{
    BOOL _textNoWrap;
    unsigned int _textWeight;
    NSArray *_textLines;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
@property (nonatomic) BOOL textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property (nonatomic) unsigned int textWeight; // @synthesize textWeight=_textWeight;

- (void).cxx_destruct;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textLinesCount;
- (void)writeTo:(id)arg1;

@end

