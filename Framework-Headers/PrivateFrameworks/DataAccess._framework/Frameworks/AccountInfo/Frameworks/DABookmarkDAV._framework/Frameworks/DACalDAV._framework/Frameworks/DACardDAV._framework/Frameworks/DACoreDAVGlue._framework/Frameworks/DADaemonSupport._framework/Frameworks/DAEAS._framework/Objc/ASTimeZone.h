//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTimeZone.h>

#import <DAEAS/ASParsingLeafNode-Protocol.h>

@interface ASTimeZone : NSTimeZone <ASParsingLeafNode>
{
    int _gmtOffset;
    int _dstOffset;
    struct _SYSTEMTIME *_standardDate;
    struct _SYSTEMTIME *_daylightDate;
    NSTimeZone *_wrappedTimeZone;
}

+ (void)_cacheTimeZoneInfo;
+ (id)_curTZDataVersion;
+ (BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3;
+ (void)_fillOutCurrentTimeZoneInfo;
+ (BOOL)_loadDataFromDisk;
+ (id)_tzCachePathCreateIfMissing:(BOOL)arg1;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (id)gmt;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg1 firstTransitionDate:(struct _SYSTEMTIME *)arg2 secondTransitionDate:(struct _SYSTEMTIME *)arg3;
- (BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(long long)arg2 outDaylightBias:(long long *)arg3;
- (struct _SYSTEMTIME)_ruleForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (id)data;
- (id)dateForRule:(struct _SYSTEMTIME *)arg1 inYear:(long long)arg2;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictForCoding;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)initWithCodingDict:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithTZNameFromCalDB:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (CDStruct_7681c444 *)mallocTZIForDate:(id)arg1;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (int)parsingState;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
