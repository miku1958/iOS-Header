//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData, NSString;

@interface NNMKHTMLParser : NSObject
{
    BOOL _containsBlacklistedElements;
    BOOL _parsingHead;
    BOOL _parsingBody;
    BOOL _cancelled;
    BOOL _isLastCharAddedLineBreak;
    NSString *_htmlBodyToParse;
    unsigned long long _encoding;
    struct _xmlParserCtxt *_parserContext;
    NSMutableData *_charactersBuffer;
    NSMutableArray *_stringAttributesStack;
    NSMutableArray *_isQuoteElementStack;
    unsigned long long _currentQuoteLevel;
    NSMutableArray *_listStack;
    unsigned long long _currentListLevel;
    NSString *_ignoringElementSubtree;
    unsigned long long _bodyTagStartIndex;
    NSString *_bodyTagStyle;
    unsigned long long _currentHeadTagStartIndex;
    unsigned long long _currentImgTagStartIndex;
    NSString *_currentImgTagSource;
    struct _xmlSAXHandler _parsingSAXHandler;
}

@property (nonatomic) unsigned long long bodyTagStartIndex; // @synthesize bodyTagStartIndex=_bodyTagStartIndex;
@property (strong, nonatomic) NSString *bodyTagStyle; // @synthesize bodyTagStyle=_bodyTagStyle;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong, nonatomic) NSMutableData *charactersBuffer; // @synthesize charactersBuffer=_charactersBuffer;
@property (nonatomic) BOOL containsBlacklistedElements; // @synthesize containsBlacklistedElements=_containsBlacklistedElements;
@property (nonatomic) unsigned long long currentHeadTagStartIndex; // @synthesize currentHeadTagStartIndex=_currentHeadTagStartIndex;
@property (strong, nonatomic) NSString *currentImgTagSource; // @synthesize currentImgTagSource=_currentImgTagSource;
@property (nonatomic) unsigned long long currentImgTagStartIndex; // @synthesize currentImgTagStartIndex=_currentImgTagStartIndex;
@property (nonatomic) unsigned long long currentListLevel; // @synthesize currentListLevel=_currentListLevel;
@property (nonatomic) unsigned long long currentQuoteLevel; // @synthesize currentQuoteLevel=_currentQuoteLevel;
@property (nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property (strong, nonatomic) NSString *htmlBodyToParse; // @synthesize htmlBodyToParse=_htmlBodyToParse;
@property (strong, nonatomic) NSString *ignoringElementSubtree; // @synthesize ignoringElementSubtree=_ignoringElementSubtree;
@property (nonatomic) BOOL isLastCharAddedLineBreak; // @synthesize isLastCharAddedLineBreak=_isLastCharAddedLineBreak;
@property (strong, nonatomic) NSMutableArray *isQuoteElementStack; // @synthesize isQuoteElementStack=_isQuoteElementStack;
@property (strong, nonatomic) NSMutableArray *listStack; // @synthesize listStack=_listStack;
@property (nonatomic) struct _xmlParserCtxt *parserContext; // @synthesize parserContext=_parserContext;
@property (nonatomic) BOOL parsingBody; // @synthesize parsingBody=_parsingBody;
@property (nonatomic) BOOL parsingHead; // @synthesize parsingHead=_parsingHead;
@property (nonatomic) struct _xmlSAXHandler parsingSAXHandler; // @synthesize parsingSAXHandler=_parsingSAXHandler;
@property (strong, nonatomic) NSMutableArray *stringAttributesStack; // @synthesize stringAttributesStack=_stringAttributesStack;

- (void).cxx_destruct;
- (void)_appendCharacters:(const char *)arg1 length:(int)arg2;
- (void)_appendImageFromAttributes:(const char **)arg1;
- (void)_appendLineBreak;
- (void)_appendString:(id)arg1;
- (void)_enumerateAttributes:(const char **)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_flushCharactersIfNeeded;
- (BOOL)_isElementBlacklisted:(id)arg1 attributes:(const char **)arg2;
- (BOOL)_isElementBody:(id)arg1;
- (BOOL)_isElementDisplayedInBlock:(id)arg1;
- (BOOL)_isElementHead:(id)arg1;
- (BOOL)_isElementHyperlink:(id)arg1;
- (BOOL)_isElementIgnorable:(id)arg1;
- (BOOL)_isElementImage:(id)arg1;
- (BOOL)_isElementLineBreak:(id)arg1;
- (BOOL)_isElementList:(id)arg1 ordered:(BOOL *)arg2;
- (BOOL)_isElementListItem:(id)arg1;
- (BOOL)_isElementQuoteElement:(id)arg1 attributes:(const char **)arg2;
- (BOOL)_isErrorBlacklisted:(struct _xmlError *)arg1;
- (void)_popStringAttributes;
- (void)_pushStringAttributes:(id)arg1;
- (void)_requireNewLine;
- (void)_stringAttributeForElement:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id *)arg3 stringAttributeValue:(id *)arg4;
- (void)_stringAttributeForHyperlink:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id *)arg3 stringAttributeValue:(id *)arg4;
- (id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2;
- (id)_stringAttributesForStyleAttribute:(id)arg1;
- (unsigned long long)_textAlignmentFromString:(id)arg1;
- (id)_topStringAttributes;
- (id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char **)arg2;
- (unsigned long long)_writingDirectionFromString:(id)arg1;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (BOOL)caresAboutHTMLContentString;
- (id)init;
- (BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(CDUnknownBlockType)arg2;
- (BOOL)isElementIgnorable:(id)arg1;
- (BOOL)isErrorTypeBlacklisted:(char *)arg1;
- (void)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2;
- (void)processBodyHTMLContent:(id)arg1 style:(id)arg2 contentRange:(struct _NSRange)arg3;
- (void)processHeadHTMLTagContent:(id)arg1;
- (void)processImgTagSource:(id)arg1 contentRange:(struct _NSRange)arg2;

@end
