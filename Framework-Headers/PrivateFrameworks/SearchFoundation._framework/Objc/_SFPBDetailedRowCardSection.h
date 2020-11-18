//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBDetailedRowCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBButton, _SFPBColor, _SFPBFormattedText, _SFPBImage, _SFPBRichText;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding>
{
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _preventThumbnailImageScaling;
    BOOL _isSecondaryTitleDetached;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_thumbnail;
    _SFPBRichText *_title;
    _SFPBFormattedText *_secondaryTitle;
    _SFPBImage *_secondaryTitleImage;
    NSArray *_descriptions;
    _SFPBRichText *_footnote;
    _SFPBFormattedText *_trailingTopText;
    _SFPBFormattedText *_trailingMiddleText;
    _SFPBFormattedText *_trailingBottomText;
    _SFPBActionItem *_action;
    _SFPBButton *_button;
}

@property (strong, nonatomic) _SFPBActionItem *action; // @synthesize action=_action;
@property (strong, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) _SFPBButton *button; // @synthesize button=_button;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property (strong, nonatomic) _SFPBRichText *footnote; // @synthesize footnote=_footnote;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSecondaryTitleDetached; // @synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (strong, nonatomic) _SFPBFormattedText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property (strong, nonatomic) _SFPBImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) _SFPBImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (strong, nonatomic) _SFPBRichText *title; // @synthesize title=_title;
@property (strong, nonatomic) _SFPBFormattedText *trailingBottomText; // @synthesize trailingBottomText=_trailingBottomText;
@property (strong, nonatomic) _SFPBFormattedText *trailingMiddleText; // @synthesize trailingMiddleText=_trailingMiddleText;
@property (strong, nonatomic) _SFPBFormattedText *trailingTopText; // @synthesize trailingTopText=_trailingTopText;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addDescriptions:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearDescriptions;
- (void)clearPunchoutOptions;
- (id)descriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)descriptionsCount;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
