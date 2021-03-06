//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRegularExpression;
@protocol OS_dispatch_queue;

@interface TTSRegexHelper : NSObject
{
    struct vector<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>, std::__1::allocator<boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char>>>>> _boostRegexes;
    NSMutableArray *_nsRegexes;
    NSMutableSet *_duplicateChecker;
    NSObject<OS_dispatch_queue> *_ttsRegexQueue;
    NSMutableDictionary *_nsRules;
    NSMutableDictionary *_boostRules;
    NSRegularExpression *_escapeStripper;
    int _regexStyle;
}

@property (nonatomic) int regexStyle; // @synthesize regexStyle=_regexStyle;

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addNSRule:(id)arg1 ruleApplication:(id)arg2 caseInsensitive:(BOOL)arg3;
- (void)_addRules:(id)arg1;
- (id)_boostApplyMatches:(id)arg1 rangeAdjustments:(id)arg2 text:(id)arg3 logging:(id)arg4;
- (id)_boostApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_calculatedUTF8Offsets:(id)arg1;
- (id)_nsApplyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)_processReplacementStringForSpecialCharacters:(id)arg1;
- (void)addRules:(id)arg1;
- (id)applyRulesForText:(id)arg1 rangeAdjustments:(id)arg2;
- (id)boostRules;
- (BOOL)hasStoredRules;
- (id)init;
- (id)regexRules;
- (void)resetStoredRules;

@end

