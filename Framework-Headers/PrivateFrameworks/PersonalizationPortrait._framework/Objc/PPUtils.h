//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPUtils : NSObject
{
}

+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)currentLocaleLanguageCode;
+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;
+ (id)hexOfBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)hexUUID;
+ (BOOL)isFirstPartyApp:(id)arg1;
+ (BOOL)isInternalDevice;
+ (BOOL)localizedTimeStructForDate:(id)arg1 tm:(struct tm *)arg2;
+ (BOOL)localizedTimeStructForSecondsFrom1970:(double)arg1 tm:(struct tm *)arg2;
+ (id)osBuild;
+ (id)preferredLanguages;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)sqliteGlobEscape:(id)arg1;
+ (BOOL)yesWithProbability:(double)arg1;

@end

