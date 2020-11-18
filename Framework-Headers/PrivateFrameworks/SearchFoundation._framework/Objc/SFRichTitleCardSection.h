//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFRichTitleCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFCard, SFColor, SFImage, SFRichText, SFUserReportRequest;

@interface SFRichTitleCardSection : SFTitleCardSection <SFRichTitleCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isCentered:1;
        unsigned int reviewNewLine:1;
        unsigned int auxiliaryBottomTextColor:1;
        unsigned int hideVerticalDivider:1;
        unsigned int titleAlign:1;
        unsigned int titleNoWrap:1;
        unsigned int thumbnailCropCircle:1;
        unsigned int playActionAlign:1;
        unsigned int subtitleIsEmphasized:1;
    } _has;
    BOOL _canBeHidden;
    BOOL _hasTopPadding;
    BOOL _hasBottomPadding;
    BOOL _isCentered;
    BOOL _reviewNewLine;
    BOOL _hideVerticalDivider;
    BOOL _titleNoWrap;
    BOOL _thumbnailCropCircle;
    BOOL _subtitleIsEmphasized;
    int _separatorStyle;
    int _auxiliaryBottomTextColor;
    int _titleAlign;
    int _playActionAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentAdvisory;
    SFImage *_titleImage;
    NSString *_descriptionText;
    NSNumber *_rating;
    NSString *_ratingText;
    SFImage *_reviewGlyph;
    NSString *_reviewText;
    NSArray *_moreGlyphs;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    NSNumber *_auxiliaryAlignment;
    NSNumber *_titleWeight;
    SFImage *_imageOverlay;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_footnote;
    SFRichText *_richSubtitle;
}

@property (copy, nonatomic) NSNumber *auxiliaryAlignment; // @synthesize auxiliaryAlignment=_auxiliaryAlignment;
@property (copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property (copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property (strong, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) BOOL canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property (nonatomic) BOOL hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property (nonatomic) BOOL hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL hideVerticalDivider; // @synthesize hideVerticalDivider=_hideVerticalDivider;
@property (strong, nonatomic) SFImage *imageOverlay; // @synthesize imageOverlay=_imageOverlay;
@property (nonatomic) BOOL isCentered; // @synthesize isCentered=_isCentered;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property (strong, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (strong, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property (nonatomic) int playActionAlign; // @synthesize playActionAlign=_playActionAlign;
@property (copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property (copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property (copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property (copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (strong, nonatomic) SFImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property (nonatomic) BOOL reviewNewLine; // @synthesize reviewNewLine=_reviewNewLine;
@property (copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property (strong, nonatomic) SFRichText *richSubtitle; // @synthesize richSubtitle=_richSubtitle;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (nonatomic) BOOL subtitleIsEmphasized; // @synthesize subtitleIsEmphasized=_subtitleIsEmphasized;
@property (readonly) Class superclass;
@property (nonatomic) BOOL thumbnailCropCircle; // @synthesize thumbnailCropCircle=_thumbnailCropCircle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) int titleAlign; // @synthesize titleAlign=_titleAlign;
@property (strong, nonatomic) SFImage *titleImage; // @synthesize titleImage=_titleImage;
@property (nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property (copy, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) SFUserReportRequest *userReportRequest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAuxiliaryBottomTextColor;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasHasTopPadding;
- (BOOL)hasHideVerticalDivider;
- (BOOL)hasIsCentered;
- (BOOL)hasPlayActionAlign;
- (BOOL)hasReviewNewLine;
- (BOOL)hasSeparatorStyle;
- (BOOL)hasSubtitleIsEmphasized;
- (BOOL)hasThumbnailCropCircle;
- (BOOL)hasTitleAlign;
- (BOOL)hasTitleNoWrap;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end
