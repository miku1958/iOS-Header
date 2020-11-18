//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TPDocumentSettings : TSPObject
{
    BOOL _hasBody;
    BOOL _hasHeaders;
    BOOL _hasFooters;
    BOOL _hasFacingPages;
    BOOL _qlPreview;
    BOOL _copyMovies;
    BOOL _copyAssets;
    BOOL _placeholderAuthoring;
    BOOL _sectionAuthoring;
    BOOL _linksEnabled;
    BOOL _hyphenation;
    BOOL _ligatures;
    BOOL _tocLinksEnabled;
    BOOL _showCTMarkup;
    BOOL _showCTDeletions;
    int _ctBubblesVisibility;
    BOOL _changeBarsVisible;
    BOOL _formatChangesVisible;
    BOOL _annotationsVisible;
    BOOL _documentIsRTL;
    long long _footnoteKind;
    long long _footnoteFormat;
    long long _footnoteNumbering;
    long long _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}

@property (nonatomic) BOOL annotationsVisible;
@property (nonatomic) BOOL autoHyphenation;
@property (readonly, nonatomic) long long basicFootnoteFormat;
@property (copy, nonatomic) NSString *bibliographyFormat;
@property (nonatomic) BOOL changeBarsVisible;
@property (nonatomic) BOOL copyMovies;
@property (nonatomic) BOOL copyTemplateAssets;
@property (copy, nonatomic) NSString *creationDate;
@property (copy, nonatomic) NSString *creationLocale;
@property (nonatomic) int ctBubblesVisibility; // @synthesize ctBubblesVisibility=_ctBubblesVisibility;
@property (copy, nonatomic) NSString *decimalTab;
@property (nonatomic) BOOL documentIsRTL;
@property (nonatomic) long long footnoteFormat;
@property (nonatomic) long long footnoteGap;
@property (nonatomic) long long footnoteKind;
@property (nonatomic) long long footnoteNumbering;
@property (nonatomic) BOOL formatChangesVisible;
@property (nonatomic) BOOL hasBody;
@property (nonatomic) BOOL hasFacingPages;
@property (nonatomic) BOOL hasFooters;
@property (nonatomic) BOOL hasHeaders;
@property (nonatomic) BOOL hyperlinksEnabled;
@property (copy, nonatomic) NSString *hyphenationLanguage;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *originalTemplate;
@property (nonatomic) BOOL placeholderAuthoring;
@property (nonatomic) BOOL quickLookPreview;
@property (nonatomic) BOOL sectionAuthoring;
@property (nonatomic) BOOL showCTDeletions;
@property (nonatomic) BOOL showCTMarkup;
@property (nonatomic) BOOL tocLinksEnabled;
@property (nonatomic) BOOL useLigatures;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)resetForNewDocumentFromTemplate:(id)arg1 locale:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCTBubblesVisibility:(int)arg1;
- (id)stringWithCurrentDate;

@end

