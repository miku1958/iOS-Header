//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SFSearchSuggestion;

@interface SPSearchQueryContext : NSObject
{
    BOOL _allowInternet;
    BOOL _isPasscodeLocked;
    BOOL _forceQueryEvenIfSame;
    BOOL _promoteLocalResults;
    BOOL _promoteParsecResults;
    BOOL _noTokenize;
    NSString *_searchString;
    SFSearchSuggestion *_engagedSuggestion;
    NSArray *_markedTextArray;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    NSArray *_searchDomains;
    NSArray *_disabledDomains;
    NSArray *_disabledBundles;
    NSArray *_disabledApps;
    unsigned long long _whyQuery;
    unsigned long long _whyClear;
    unsigned long long _queryIdent;
    NSArray *_searchEntities;
}

@property (nonatomic) BOOL allowInternet; // @synthesize allowInternet=_allowInternet;
@property (strong, nonatomic) NSArray *disabledApps; // @synthesize disabledApps=_disabledApps;
@property (strong, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property (strong, nonatomic) NSArray *disabledDomains; // @synthesize disabledDomains=_disabledDomains;
@property (readonly, nonatomic) NSString *displayedText;
@property (strong, nonatomic) SFSearchSuggestion *engagedSuggestion; // @synthesize engagedSuggestion=_engagedSuggestion;
@property (nonatomic) BOOL forceQueryEvenIfSame; // @synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (nonatomic) BOOL isPasscodeLocked; // @synthesize isPasscodeLocked=_isPasscodeLocked;
@property (strong, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property (strong, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property (strong, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property (nonatomic) BOOL noTokenize; // @synthesize noTokenize=_noTokenize;
@property (nonatomic) BOOL promoteLocalResults; // @synthesize promoteLocalResults=_promoteLocalResults;
@property (nonatomic) BOOL promoteParsecResults; // @synthesize promoteParsecResults=_promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property (strong, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property (strong, nonatomic) NSArray *searchEntities; // @synthesize searchEntities=_searchEntities;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) unsigned long long whyClear; // @synthesize whyClear=_whyClear;
@property (nonatomic) unsigned long long whyQuery; // @synthesize whyQuery=_whyQuery;

+ (id)queryContextWithSearchString:(id)arg1;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)arg1;

@end

