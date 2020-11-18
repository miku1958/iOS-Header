//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBDescriptionCardSection-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBURL;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int titleNoWrap:1;
        unsigned int titleWeight:1;
        unsigned int descriptionSize:1;
        unsigned int descriptionWeight:1;
        unsigned int descriptionExpand:1;
        unsigned int imageAlign:1;
        unsigned int textAlign:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _titleNoWrap;
    BOOL _descriptionExpand;
    int _separatorStyle;
    int _titleWeight;
    int _descriptionSize;
    int _descriptionWeight;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    _SFPBText *_descriptionText;
    NSString *_expandText;
    _SFPBImage *_image;
    NSString *_attributionText;
    _SFPBURL *_attributionURL;
    _SFPBImage *_attributionGlyph;
}

@property (strong, nonatomic) _SFPBImage *attributionGlyph; // @synthesize attributionGlyph=_attributionGlyph;
@property (copy, nonatomic) NSString *attributionText; // @synthesize attributionText=_attributionText;
@property (strong, nonatomic) _SFPBURL *attributionURL; // @synthesize attributionURL=_attributionURL;
@property (strong, nonatomic) _SFPBColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL descriptionExpand; // @synthesize descriptionExpand=_descriptionExpand;
@property (nonatomic) int descriptionSize; // @synthesize descriptionSize=_descriptionSize;
@property (strong, nonatomic) _SFPBText *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic) int descriptionWeight; // @synthesize descriptionWeight=_descriptionWeight;
@property (copy, nonatomic) NSString *expandText; // @synthesize expandText=_expandText;
@property (readonly, nonatomic) BOOL hasAttributionGlyph;
@property (readonly, nonatomic) BOOL hasAttributionText;
@property (readonly, nonatomic) BOOL hasAttributionURL;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (readonly, nonatomic) BOOL hasCanBeHidden;
@property (readonly, nonatomic) BOOL hasDescriptionExpand;
@property (readonly, nonatomic) BOOL hasDescriptionSize;
@property (readonly, nonatomic) BOOL hasDescriptionText;
@property (readonly, nonatomic) BOOL hasDescriptionWeight;
@property (readonly, nonatomic) BOOL hasExpandText;
@property (readonly, nonatomic) BOOL hasHasBottomPadding;
@property (readonly, nonatomic) BOOL hasHasTopPadding;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasImageAlign;
@property (readonly, nonatomic) BOOL hasPunchoutPickerDismissText;
@property (readonly, nonatomic) BOOL hasPunchoutPickerTitle;
@property (readonly, nonatomic) BOOL hasSeparatorStyle;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTextAlign;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTitleNoWrap;
@property (readonly, nonatomic) BOOL hasTitleWeight;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _SFPBImage *image; // @synthesize image=_image;
@property (nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int textAlign; // @synthesize textAlign=_textAlign;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property (nonatomic) int titleWeight; // @synthesize titleWeight=_titleWeight;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
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
