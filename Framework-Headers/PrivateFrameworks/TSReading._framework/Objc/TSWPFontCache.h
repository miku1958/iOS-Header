//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSULRUCache;

@interface TSWPFontCache : NSObject
{
    TSULRUCache *_fontCache;
    NSArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
- (id)autorelease;
- (id)availableMembersOfFontFamily:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CTFont *)createFontWithName:(id)arg1 size:(double)arg2;
- (void)dealloc;
- (id)displayNameForFontFamily:(id)arg1;
- (id)init;
- (void)p_FontWasDownloaded:(id)arg1;
- (id)p_excludedFamilyNames;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)sortedFontFamilies;
- (id)sortedFontFamilyEntriesForStylesheet:(id)arg1;

@end
