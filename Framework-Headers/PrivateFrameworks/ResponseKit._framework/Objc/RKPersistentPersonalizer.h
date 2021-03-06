//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLocale, NSMutableDictionary, NSString, NSURL;
@protocol RKDisplayStringsProvider;

@interface RKPersistentPersonalizer : NSObject
{
    void *_model;
    NSURL *_dynamicDataURL;
    NSString *_languageID;
    NSLocale *_languageLocale;
    id<RKDisplayStringsProvider> _displayStringsProvider;
    NSDate *_lastObservedDynamicDataCreationDate;
    NSDate *_lastDynamicDataCreationCheckDate;
    NSMutableDictionary *_synonyms;
}

@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider; // @synthesize displayStringsProvider=_displayStringsProvider;
@property (strong) NSURL *dynamicDataURL; // @synthesize dynamicDataURL=_dynamicDataURL;
@property (strong) NSString *languageID; // @synthesize languageID=_languageID;
@property (strong) NSLocale *languageLocale; // @synthesize languageLocale=_languageLocale;
@property (strong) NSDate *lastDynamicDataCreationCheckDate; // @synthesize lastDynamicDataCreationCheckDate=_lastDynamicDataCreationCheckDate;
@property (strong) NSDate *lastObservedDynamicDataCreationDate; // @synthesize lastObservedDynamicDataCreationDate=_lastObservedDynamicDataCreationDate;
@property (readonly) void *model;
@property (strong) NSMutableDictionary *synonyms; // @synthesize synonyms=_synonyms;

+ (id)nonEmptyStringsPredicate;
+ (void)removeAllDynamicModelsInDirectory:(id)arg1;
- (void).cxx_destruct;
- (void *)createLanguageModel;
- (void)dealloc;
- (id)dynamicDataCreationDate;
- (void)flushDynamicData;
- (id)headwordsForSynonym:(id)arg1;
- (id)headwordsForSynonymPrefix:(id)arg1;
- (id)init;
- (id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3;
- (void)initializeDynamicLanguageModel;
- (id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4;
- (void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6;

@end

