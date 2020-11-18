//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableIndexSet, NSString, SXFontAttributesConstructor;
@protocol SXSmartFieldFactory, SXTextSourceDataSource, SXTextStyleFontDescribing;

@interface SXTextSource : NSObject
{
    id<SXTextSourceDataSource> _dataSource;
    NSString *_string;
    id<SXSmartFieldFactory> _smartFieldFactory;
    NSMutableIndexSet *_deletedRangeOffsets;
    NSMutableIndexSet *_insertedRangeOffsets;
    NSMutableIndexSet *_rangesExcludedOfParagraphSpacing;
    SXFontAttributesConstructor *_fontAttributeConstructor;
    id<SXTextStyleFontDescribing> _defaultFontDescribing;
}

@property (readonly, weak, nonatomic) id<SXTextSourceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) id<SXTextStyleFontDescribing> defaultFontDescribing; // @synthesize defaultFontDescribing=_defaultFontDescribing;
@property (strong, nonatomic) NSMutableIndexSet *deletedRangeOffsets; // @synthesize deletedRangeOffsets=_deletedRangeOffsets;
@property (readonly, nonatomic) SXFontAttributesConstructor *fontAttributeConstructor; // @synthesize fontAttributeConstructor=_fontAttributeConstructor;
@property (strong, nonatomic) NSMutableIndexSet *insertedRangeOffsets; // @synthesize insertedRangeOffsets=_insertedRangeOffsets;
@property (readonly, nonatomic) NSLocale *locale;
@property (strong, nonatomic) NSMutableIndexSet *rangesExcludedOfParagraphSpacing; // @synthesize rangesExcludedOfParagraphSpacing=_rangesExcludedOfParagraphSpacing;
@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
@property (readonly, nonatomic) NSString *string; // @synthesize string=_string;

- (void).cxx_destruct;
- (void)applyAdditionsOnTextTangierStorage:(id)arg1;
- (void)applyListStylingOnTextTangierStorage:(id)arg1 usingAttributesMap:(id)arg2;
- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (id)attributesForTextStyle:(id)arg1 baseTextStyle:(id)arg2 onParagraphStyle:(id)arg3 forRange:(struct _NSRange)arg4 resultingDropCapStyle:(id *)arg5 textResizer:(id)arg6;
- (id)characterStyleFromAttributes:(id)arg1 context:(id)arg2;
- (id)cleanString:(id)arg1;
- (id)description;
- (id)fontFaceForTextDescribing:(id)arg1 inheritingFromTextStyle:(id)arg2;
- (id)initWithString:(id)arg1 smartFieldFactory:(id)arg2 dataSource:(id)arg3;
- (int)listLabelTypeForListType:(unsigned long long)arg1;
- (int)listNumberTypeForListType:(unsigned long long)arg1;
- (id)populateArray:(id)arg1 withValue:(id)arg2 forSize:(unsigned long long)arg3;
- (id)randomColorWithAlpha:(double)arg1;
- (struct _NSRange)rangeForRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeInBounds:(struct _NSRange)arg1 maxLength:(unsigned long long)arg2;

@end

