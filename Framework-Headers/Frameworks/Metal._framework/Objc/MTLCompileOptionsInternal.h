//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCompileOptions.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal : MTLCompileOptions
{
    BOOL _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    BOOL _fastMathEnabled;
    BOOL _glBufferBindPoints;
    BOOL _tracingEnabled;
    BOOL _debuggingEnabled;
    unsigned long long _languageVersion;
    BOOL _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
}

- (id)additionalCompilerArguments;
- (BOOL)compileTimeStatisticsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)debuggingEnabled;
- (id)description;
- (id)exportDictionary;
- (BOOL)fastMathEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (BOOL)glBufferBindPoints;
- (unsigned long long)hash;
- (void)importDictionary:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)languageVersion;
- (id)preprocessorMacros;
- (void)setAdditionalCompilerArguments:(id)arg1;
- (void)setCompileTimeStatisticsEnabled:(BOOL)arg1;
- (void)setDebuggingEnabled:(BOOL)arg1;
- (void)setFastMathEnabled:(BOOL)arg1;
- (void)setGlBufferBindPoints:(BOOL)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setPreprocessorMacros:(id)arg1;
- (void)setSourceLanguage:(unsigned char)arg1;
- (void)setTracingEnabled:(BOOL)arg1;
- (unsigned char)sourceLanguage;
- (BOOL)tracingEnabled;

@end
