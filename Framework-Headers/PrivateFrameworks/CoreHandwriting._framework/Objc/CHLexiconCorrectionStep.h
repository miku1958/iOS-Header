//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer, NSCharacterSet, NSDictionary, NSLocale;

@interface CHLexiconCorrectionStep : CHPostprocessingStep
{
    BOOL _shouldAutocapitalize;
    int _autoCapitalizationMode;
    CHRecognizer *_recognizer;
    NSLocale *_locale;
    const struct _LXLexicon *_staticLexicon;
    const struct _LXLexicon *_customLexicon;
    const struct _LXLexicon *_phraseLexicon;
    const struct _LXLexicon *_customPhraseLexicon;
    NSDictionary *_textReplacements;
    NSCharacterSet *_consumableStrokesCharSet;
    NSCharacterSet *_fullWidthPunctuationThatExpectsUppercaseAfter;
}

@property (readonly, nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property (strong, nonatomic) NSCharacterSet *consumableStrokesCharSet; // @synthesize consumableStrokesCharSet=_consumableStrokesCharSet;
@property (nonatomic) const struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property (nonatomic) const struct _LXLexicon *customPhraseLexicon; // @synthesize customPhraseLexicon=_customPhraseLexicon;
@property (strong, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter; // @synthesize fullWidthPunctuationThatExpectsUppercaseAfter=_fullWidthPunctuationThatExpectsUppercaseAfter;
@property (nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) const struct _LXLexicon *phraseLexicon; // @synthesize phraseLexicon=_phraseLexicon;
@property (nonatomic) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property (nonatomic) BOOL shouldAutocapitalize; // @synthesize shouldAutocapitalize=_shouldAutocapitalize;
@property (nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property (strong, nonatomic) NSDictionary *textReplacements; // @synthesize textReplacements=_textReplacements;

- (id)applyLexiconCorrectionOnToken:(id)arg1 hasEmptyContext:(BOOL)arg2 history:(id)arg3 historyEndsAlphabetic:(BOOL)arg4 historyEndsWithLineBreak:(BOOL)arg5 prevToken:(id)arg6 shouldCapitalizeGivenHistory:(BOOL)arg7 tokenIndex:(long long)arg8 textReplacements:(id)arg9 shouldEntrySkipCorrection:(BOOL)arg10 contextBeforeToken:(id)arg11;
- (id)applyLexiconCorrections:(id)arg1 shouldCapitalizeWord:(BOOL)arg2 shouldSkipEntryCorrection:(BOOL)arg3 outBestTokenIndex:(long long *)arg4 bestLexiconTokenScore:(double *)arg5 textReplacements:(id)arg6 contextBeforeToken:(id)arg7;
- (id)capitalizeString:(id)arg1;
- (id)capitalizeToken:(id)arg1;
- (void)dealloc;
- (id)getSpellCorrectedToken:(id)arg1 contextBeforeToken:(id)arg2;
- (id)initWithAutoCapitalizationMode:(int)arg1 locale:(id)arg2 staticLexicon:(struct _LXLexicon *)arg3 customLexicon:(struct _LXLexicon *)arg4 phraseLexicon:(struct _LXLexicon *)arg5 customPhraseLexicon:(struct _LXLexicon *)arg6 recognizer:(id)arg7 textReplacements:(id)arg8;
- (id)process:(id)arg1;
- (BOOL)tokenIsExemptFromCorrection:(id)arg1 inPath:(id)arg2 withTokensInRow:(id)arg3;

@end
