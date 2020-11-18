//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/TTTextStorageStyler-Protocol.h>

@class NSString, TTZoomController;

@interface TTTextController : NSObject <TTTextStorageStyler>
{
    BOOL _keepNSTextTableAttributes;
    BOOL _disableSingleLineA;
    double _bodyStyleFontSizeThreshold;
    double _headingStyleFontSizeThreshold;
    TTZoomController *_zoomController;
}

@property (nonatomic) double bodyStyleFontSizeThreshold; // @synthesize bodyStyleFontSizeThreshold=_bodyStyleFontSizeThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSingleLineA; // @synthesize disableSingleLineA=_disableSingleLineA;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingStyleFontSizeThreshold; // @synthesize headingStyleFontSizeThreshold=_headingStyleFontSizeThreshold;
@property (nonatomic) BOOL keepNSTextTableAttributes; // @synthesize keepNSTextTableAttributes=_keepNSTextTableAttributes;
@property (readonly) Class superclass;
@property (strong, nonatomic) TTZoomController *zoomController; // @synthesize zoomController=_zoomController;

+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (struct UIFont *)preferredFontForTTTextStyle:(unsigned int)arg1;
+ (double)superscriptScaleFactor;
- (void).cxx_destruct;
- (void)addBIToStyle:(id)arg1;
- (void)addLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)bodyAttributes;
- (id)bodyAttributesWithContentSizeCategory:(id)arg1;
- (id)captionAttributes;
- (id)captionAttributesWithContentSizeCategory:(id)arg1;
- (id)checklistAttributes;
- (id)checklistAttributesWithContentSizeCategory:(id)arg1;
- (id)copyAttribute:(id)arg1 fromAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)copyNSParagraphStylefromAttributes:(id)arg1 toAttributes:(id)arg2;
- (id)defaultListAttributes;
- (id)defaultListAttributesWithContentSizeCategory:(id)arg1;
- (id)defaultParagraphStyle;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)filterStyleAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)fixedWidthAttributes;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)arg1;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
- (id)headingAttributes;
- (id)headingAttributesWithContentSizeCategory:(id)arg1;
- (id)init;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(BOOL)arg2;
- (id)preferredAttributesForTTTextStyle:(unsigned int)arg1;
- (id)referenceAttributesForLocation:(unsigned long long)arg1 textStorage:(id)arg2 currentParagraphStart:(unsigned long long)arg3;
- (id)removeAttribute:(id)arg1 ifInconsistentAtLocation:(unsigned long long)arg2 inTextStorage:(id)arg3 forNewTypingAttributes:(id)arg4;
- (void)removeLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)resetGuessedFontSizes;
- (id)strippedTypingAttributesForEmptyParagraph:(id)arg1 atTheEndOfDocument:(BOOL)arg2 isTyping:(BOOL)arg3;
- (void)styleFontInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2 contentSizeCategory:(id)arg3;
- (void)styleFontInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)styleForModelAttributes:(id)arg1;
- (id)styleForModelAttributes:(id)arg1 contentSizeCategory:(id)arg2;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange)arg2 fixModelAttributes:(BOOL)arg3;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange)arg2 fixModelAttributes:(BOOL)arg3 enableLetterpress:(BOOL)arg4;
- (void)styleText:(id)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(BOOL)arg3;
- (id)subheadingAttributes;
- (id)subheadingAttributesWithContentSizeCategory:(id)arg1;
- (id)titleAttributes;
- (id)titleAttributesWithContentSizeCategory:(id)arg1;
- (id)typingAttributesForRange:(struct _NSRange)arg1 forSelectionChange:(BOOL)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4;

@end

