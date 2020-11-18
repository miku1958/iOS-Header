//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MecabraWordProperties : NSObject
{
    NSString *_analysisString;
    NSArray *_characterInformation;
    NSArray *_codeLookupInformation;
    BOOL _emoji;
    int _language;
}

@property (copy, nonatomic) NSString *analysisString; // @synthesize analysisString=_analysisString;
@property (strong, nonatomic) NSArray *characterInformation; // @synthesize characterInformation=_characterInformation;
@property (strong, nonatomic) NSArray *codeLookupInformation; // @synthesize codeLookupInformation=_codeLookupInformation;
@property (nonatomic, getter=isEmoji) BOOL emoji; // @synthesize emoji=_emoji;
@property (nonatomic) int language; // @synthesize language=_language;

+ (struct __IDXIndex *)characterInformationDictionary;
+ (struct __IDXIndex *)codeLookupInformationDictionary;
+ (struct __IDXIndex *)informationDictionaryAtPath:(struct __CFURL *)arg1;
+ (id)searchResultsForString:(id)arg1 dictionary:(struct __IDXIndex *)arg2;
+ (id)sortedRadicalList;
- (id)bihuaCodes;
- (id)cangjieCodes;
- (void)dealloc;
- (id)initWithString:(id)arg1 language:(int)arg2;
- (id)initialsForStrings:(id)arg1;
- (id)isIncludedInCurrentLanguage;
- (id)pinyinInformationForString:(id)arg1;
- (id)radicalInformationForString:(id)arg1;
- (id)separatedInputCodesForString:(id)arg1;
- (id)strokeInformationForString:(id)arg1;
- (id)tonesForString:(id)arg1;
- (id)valueForKey:(int)arg1;
- (id)wubixingCodes;
- (id)zhuyinInformationForString:(id)arg1;

@end

