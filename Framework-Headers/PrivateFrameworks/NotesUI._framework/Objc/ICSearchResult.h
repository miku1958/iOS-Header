//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSearchRankingComparison, NSArray, NSAttributedString, NSRegularExpression, NSString, NSTextCheckingResult, NSValue;
@protocol ICSearchIndexable;

@interface ICSearchResult : NSObject
{
    unsigned long long _cachedHash;
    BOOL _isSubstringMatch;
    BOOL _displayingParticipantMatch;
    id<ICSearchIndexable> _object;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    unsigned long long _matchedField;
    NSString *_searchString;
    NSString *_highlightString;
    NSValue *_firstSeenRangeInNote;
    NSString *_foundMatchedString;
    NSString *_displayingTitle;
    NSTextCheckingResult *_displayingTitleCheckingResult;
    NSAttributedString *_titleAttributedString;
    NSString *_displayingSnippet;
    NSTextCheckingResult *_displayingSnippetCheckingResult;
    NSAttributedString *_snippetAttributedString;
    ICSearchRankingComparison *_rankComparison;
    id<ICSearchIndexable> _currentContextObject;
    NSRegularExpression *_highlightPatternRegex;
    struct CGRect _titleAttributedStringInsideFrame;
    struct CGRect _snippetAttributedStringInsideFrame;
}

@property (readonly, nonatomic) NSArray *csEvaluatorMatches;
@property (strong, nonatomic) id<ICSearchIndexable> currentContextObject; // @synthesize currentContextObject=_currentContextObject;
@property (nonatomic) BOOL displayingParticipantMatch; // @synthesize displayingParticipantMatch=_displayingParticipantMatch;
@property (readonly, nonatomic) NSString *displayingSnippet; // @synthesize displayingSnippet=_displayingSnippet;
@property (readonly, nonatomic) NSTextCheckingResult *displayingSnippetCheckingResult; // @synthesize displayingSnippetCheckingResult=_displayingSnippetCheckingResult;
@property (readonly, nonatomic) NSString *displayingTitle; // @synthesize displayingTitle=_displayingTitle;
@property (readonly, nonatomic) NSTextCheckingResult *displayingTitleCheckingResult; // @synthesize displayingTitleCheckingResult=_displayingTitleCheckingResult;
@property (strong, nonatomic) NSValue *firstSeenRangeInNote; // @synthesize firstSeenRangeInNote=_firstSeenRangeInNote;
@property (strong, nonatomic) NSString *foundMatchedString; // @synthesize foundMatchedString=_foundMatchedString;
@property (strong, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property (readonly, nonatomic) NSString *highlightString; // @synthesize highlightString=_highlightString;
@property (readonly, nonatomic) BOOL isSubstringMatch; // @synthesize isSubstringMatch=_isSubstringMatch;
@property (readonly, nonatomic) unsigned long long matchedField; // @synthesize matchedField=_matchedField;
@property (readonly, nonatomic) id<ICSearchIndexable> object; // @synthesize object=_object;
@property (strong, nonatomic) ICSearchRankingComparison *rankComparison; // @synthesize rankComparison=_rankComparison;
@property (readonly, nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property (readonly, nonatomic) unsigned long long relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property (readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (strong, nonatomic) NSAttributedString *snippetAttributedString; // @synthesize snippetAttributedString=_snippetAttributedString;
@property (nonatomic) struct CGRect snippetAttributedStringInsideFrame; // @synthesize snippetAttributedStringInsideFrame=_snippetAttributedStringInsideFrame;
@property (strong, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
@property (nonatomic) struct CGRect titleAttributedStringInsideFrame; // @synthesize titleAttributedStringInsideFrame=_titleAttributedStringInsideFrame;

+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(struct UIColor *)arg4 insideFrame:(struct CGRect)arg5 centered:(BOOL)arg6;
+ (id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(struct UIColor *)arg2;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 textCheckingResult:(id *)arg3;
+ (struct CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (BOOL)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(BOOL)arg3 insideFrame:(struct CGRect)arg4 centered:(BOOL)arg5;
+ (id)matchOfString:(id)arg1 inContent:(id)arg2 isSubstringMatch:(BOOL)arg3;
+ (id)regularExpressionForSearchString:(id)arg1 matchWordBoundaries:(BOOL)arg2;
+ (id)regularExpressionMatchOfString:(id)arg1 inContent:(id)arg2 matchWordBoundaries:(BOOL)arg3;
+ (id)tokensInString:(id)arg1;
- (void).cxx_destruct;
- (id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor *)arg2 insideFrame:(struct CGRect)arg3;
- (long long)compareByModificationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)firstRangeValueInNoteForMatchString:(id)arg1 textCheckingResult:(id)arg2;
- (unsigned long long)hash;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 matchedField:(unsigned long long)arg5 searchString:(id)arg6 highlightString:(id)arg7 isSubstringMatch:(BOOL)arg8;
- (id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 matchedField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6 isSubstringMatch:(BOOL)arg7;
- (BOOL)isEqual:(id)arg1;
- (id)matchInTextContent:(id)arg1;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (void)refetchObjectFromContext:(id)arg1;
- (void)refreshDisplaySnippet;
- (void)refreshDisplayTitle;
- (id)snippetWithBaseAttributes:(id)arg1 highlightColor:(struct UIColor *)arg2 insideFrame:(struct CGRect)arg3;

@end
