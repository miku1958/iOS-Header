//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController
{
    NSArray *_supportedLanguageCodes;
    NSURL *_helpBookURL;
    NSArray *_preferredLanguagesOverride;
    NSArray *_locales;
}

@property (strong, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property (strong, nonatomic) NSArray *preferredLanguagesOverride; // @synthesize preferredLanguagesOverride=_preferredLanguagesOverride;

- (void).cxx_destruct;
- (id)currentLocale;
- (id)englishLocale;
- (id)initWithURL:(id)arg1;
- (id)localeWithPreferredLanguages:(id)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

