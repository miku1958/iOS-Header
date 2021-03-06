//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBRichText-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBText;

@interface _SFPBRichText : PBCodable <_SFPBRichText, NSSecureCoding>
{
    _SFPBText *_text;
    _SFPBGraphicalFloat *_starRating;
    NSString *_contentAdvisory;
    NSArray *_icons;
    NSArray *_formattedTextPieces;
}

@property (copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *formattedTextPieces; // @synthesize formattedTextPieces=_formattedTextPieces;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _SFPBGraphicalFloat *starRating; // @synthesize starRating=_starRating;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBText *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)addFormattedTextPieces:(id)arg1;
- (void)addIcons:(id)arg1;
- (void)clearFormattedTextPieces;
- (void)clearIcons;
- (id)dictionaryRepresentation;
- (id)formattedTextPiecesAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedTextPiecesCount;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

