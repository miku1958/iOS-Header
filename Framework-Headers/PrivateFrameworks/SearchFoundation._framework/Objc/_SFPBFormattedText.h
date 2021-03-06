//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBFormattedText-Protocol.h>

@class NSData, NSString, _SFPBImage, _SFPBText;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding>
{
    BOOL _isEmphasized;
    BOOL _isBold;
    int _textColor;
    _SFPBText *_text;
    _SFPBImage *_glyph;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _SFPBImage *glyph; // @synthesize glyph=_glyph;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isBold; // @synthesize isBold=_isBold;
@property (nonatomic) BOOL isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBText *text; // @synthesize text=_text;
@property (nonatomic) int textColor; // @synthesize textColor=_textColor;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

