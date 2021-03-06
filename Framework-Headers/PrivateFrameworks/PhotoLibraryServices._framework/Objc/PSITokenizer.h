//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface PSITokenizer : NSObject
{
    void *_tagger;
    struct __CFStringTokenizer *_nameTokenizer;
    BOOL _localeIsGerman;
    BOOL _useCache;
    NSMutableDictionary *_cache;
    NSLocale *_locale;
}

@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;

+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (id)fts5StringFromString:(id)arg1 useWildcard:(BOOL)arg2;
+ (id)ftsTokenizerName;
- (void).cxx_destruct;
- (void)_tokenizeString:(id)arg1 withContext:(CDStruct_d5c410e0 *)arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 useCache:(BOOL)arg2;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id *)arg3 error:(id *)arg4;
- (id)normalizeString:(id)arg1;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 *)arg1;
- (void)tokenizePersonName:(id)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t *)arg3;

@end

