//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CVNLPLanguageResourceBundle, NSLocale;

@interface CRLanguageResources : NSObject
{
    NSLocale *_locale;
    void *_lmCharacterLanguageModel;
    struct CVNLPLanguageModel *_cvnlpCharacterLanguageModel;
    const struct _LXLexicon *_staticLexicon;
    void *_wordLanguageModel;
    CVNLPLanguageResourceBundle *__cvnlpLanguageResourceBundle;
}

@property (strong) CVNLPLanguageResourceBundle *_cvnlpLanguageResourceBundle; // @synthesize _cvnlpLanguageResourceBundle=__cvnlpLanguageResourceBundle;
@property (nonatomic) struct CVNLPLanguageModel *cvnlpCharacterLanguageModel; // @synthesize cvnlpCharacterLanguageModel=_cvnlpCharacterLanguageModel;
@property (nonatomic) void *lmCharacterLanguageModel; // @synthesize lmCharacterLanguageModel=_lmCharacterLanguageModel;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) const struct _LXLexicon *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property (nonatomic) void *wordLanguageModel; // @synthesize wordLanguageModel=_wordLanguageModel;

+ (struct CVNLPLanguageModel *)createCVNLPCharacterLanguageModel:(id)arg1;
+ (void *)createCharacterModel:(id)arg1;
+ (struct _LXLexicon *)createStaticLexicon:(id)arg1;
+ (void *)createWordLanguageModel:(id)arg1;
+ (BOOL)isCustomWordsSupportedForLanguageIdentifier:(id)arg1;
+ (BOOL)isLanguageSupported:(id)arg1;
- (void).cxx_destruct;
- (id)cvnlpLanguageResourceBundle:(id)arg1;
- (void)dealloc;
- (id)initWithLanguageIdentifier:(id)arg1;

@end

