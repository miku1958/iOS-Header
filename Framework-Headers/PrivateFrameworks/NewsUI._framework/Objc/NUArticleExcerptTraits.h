//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>

@class NUTrait, UITraitCollection;

@interface NUArticleExcerptTraits : NSObject <NSCopying>
{
    double _hairlineSeparatorHeight;
    double _topMarginAboveHeadlineTitle;
    double _topMarginAboveHeadlineDate;
    double _topMarginAboveHairlineSeparator;
    double _topMarginAboveExcerpt;
    double _scale;
    UITraitCollection *_traitCollection;
    NUTrait *_headlineImageRatioTrait;
    NUTrait *_headlineImageMarginTrait;
    NUTrait *_contentMarginTrait;
    NUTrait *_excerptMarginTrait;
    NUTrait *_readMoreMinTopMarginTrait;
    NUTrait *_bottomMaringTrait;
    struct CGSize _size;
}

@property (readonly, nonatomic) double bottomMargin;
@property (strong, nonatomic) NUTrait *bottomMaringTrait; // @synthesize bottomMaringTrait=_bottomMaringTrait;
@property (readonly, nonatomic) double contentMargin;
@property (strong, nonatomic) NUTrait *contentMarginTrait; // @synthesize contentMarginTrait=_contentMarginTrait;
@property (readonly, nonatomic) double excerptMargin;
@property (strong, nonatomic) NUTrait *excerptMarginTrait; // @synthesize excerptMarginTrait=_excerptMarginTrait;
@property (readonly, nonatomic) double hairlineSeparatorHeight; // @synthesize hairlineSeparatorHeight=_hairlineSeparatorHeight;
@property (readonly, nonatomic) double headlineImageHeight;
@property (readonly, nonatomic) double headlineImageMargin;
@property (strong, nonatomic) NUTrait *headlineImageMarginTrait; // @synthesize headlineImageMarginTrait=_headlineImageMarginTrait;
@property (strong, nonatomic) NUTrait *headlineImageRatioTrait; // @synthesize headlineImageRatioTrait=_headlineImageRatioTrait;
@property (readonly, nonatomic) double minTopMaginAboveReadMoreButton;
@property (strong, nonatomic) NUTrait *readMoreMinTopMarginTrait; // @synthesize readMoreMinTopMarginTrait=_readMoreMinTopMarginTrait;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) double topMarginAboveExcerpt; // @synthesize topMarginAboveExcerpt=_topMarginAboveExcerpt;
@property (readonly, nonatomic) double topMarginAboveHairlineSeparator; // @synthesize topMarginAboveHairlineSeparator=_topMarginAboveHairlineSeparator;
@property (readonly, nonatomic) double topMarginAboveHeadlineDate; // @synthesize topMarginAboveHeadlineDate=_topMarginAboveHeadlineDate;
@property (readonly, nonatomic) double topMarginAboveHeadlineTitle; // @synthesize topMarginAboveHeadlineTitle=_topMarginAboveHeadlineTitle;
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

- (void).cxx_destruct;
- (double)contentMarginForDeviceTrait:(id)arg1 delta:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTraitCollection:(id)arg1 size:(struct CGSize)arg2;

@end

