//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

@class NSArray, NSNumber, NSString, SFActionItem, SFImage;

@interface SFRichTitleCardSection : SFTitleCardSection
{
    BOOL _isCentered;
    BOOL _reviewNewLine;
    BOOL _hideVerticalDivider;
    BOOL _titleNoWrap;
    BOOL _thumbnailCropCircle;
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
    unsigned long long _auxiliaryBottomTextColor;
    NSNumber *_auxiliaryAlignment;
    unsigned long long _titleAlign;
    NSNumber *_titleWeight;
    SFImage *_imageOverlay;
    SFActionItem *_playAction;
    unsigned long long _playActionAlign;
    NSArray *_offers;
}

@property (copy, nonatomic) NSNumber *auxiliaryAlignment; // @synthesize auxiliaryAlignment=_auxiliaryAlignment;
@property (copy, nonatomic) NSString *auxiliaryBottomText; // @synthesize auxiliaryBottomText=_auxiliaryBottomText;
@property (nonatomic) unsigned long long auxiliaryBottomTextColor; // @synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor;
@property (copy, nonatomic) NSString *auxiliaryMiddleText; // @synthesize auxiliaryMiddleText=_auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryTopText; // @synthesize auxiliaryTopText=_auxiliaryTopText;
@property (copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic) BOOL hideVerticalDivider; // @synthesize hideVerticalDivider=_hideVerticalDivider;
@property (strong, nonatomic) SFImage *imageOverlay; // @synthesize imageOverlay=_imageOverlay;
@property (nonatomic) BOOL isCentered; // @synthesize isCentered=_isCentered;
@property (copy, nonatomic) NSArray *moreGlyphs; // @synthesize moreGlyphs=_moreGlyphs;
@property (copy, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property (strong, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property (nonatomic) unsigned long long playActionAlign; // @synthesize playActionAlign=_playActionAlign;
@property (copy, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property (copy, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property (strong, nonatomic) SFImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property (nonatomic) BOOL reviewNewLine; // @synthesize reviewNewLine=_reviewNewLine;
@property (copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property (nonatomic) BOOL thumbnailCropCircle; // @synthesize thumbnailCropCircle=_thumbnailCropCircle;
@property (nonatomic) unsigned long long titleAlign; // @synthesize titleAlign=_titleAlign;
@property (strong, nonatomic) SFImage *titleImage; // @synthesize titleImage=_titleImage;
@property (nonatomic) BOOL titleNoWrap; // @synthesize titleNoWrap=_titleNoWrap;
@property (copy, nonatomic) NSNumber *titleWeight; // @synthesize titleWeight=_titleWeight;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
