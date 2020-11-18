//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/EMFEmojiPreferenceActions-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions>
{
    NSMutableDictionary *_defaults;
    BOOL _isDefaultDirty;
    NSMutableDictionary *_usageHistory;
    NSMutableArray *_recents;
    NSMutableDictionary *_typingNames;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_categoryIndexes;
    long long _currentSequence;
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;
    unsigned long long _maximumRecentsCount;
}

@property (readonly, nonatomic) NSArray *allRecents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDisplayedSkinToneHelp;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRecentsCount; // @synthesize maximumRecentsCount=_maximumRecentsCount;
@property (readonly, nonatomic) NSString *previouslyUsedCategory;
@property (readonly, nonatomic) NSArray *recentEmojis;
@property (readonly) Class superclass;

+ (id)_allRecentStrings;
+ (id)_cacheDomain;
+ (id)_cachedFlagCategoryEmoji:(CDUnknownBlockType)arg1;
+ (id)_recentEmojiStrings;
+ (id)_recentStringsInCharacterSet:(id)arg1;
+ (id)defaultsDomain;
- (void).cxx_destruct;
- (void)_checkForDingbatDuplicates;
- (void)_checkForMalformationEmoji;
- (void)_cleanUpOldFlagsCaches;
- (void)_readPreferencesFromDefaults;
- (void)_setRecentStrings:(id)arg1;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (BOOL)hasLastUsedVariantForEmoji:(id)arg1;
- (id)init;
- (BOOL)isMalformationEmoji:(id)arg1;
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;
- (void)loadDefaultsIfNecessary;
- (void)migrateFromMajorOSVersion:(long long)arg1;
- (void)migrateInDidDisplaySkinToneHelp:(BOOL)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;
- (void)migrateInSkinTonePreferences:(id)arg1;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (void)readEmojiDefaults;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (id)recentsInCharacterSet:(id)arg1;
- (void)resetEmojiDefaults;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (id)typingNameForEmoji:(id)arg1;
- (void)writeEmojiDefaults;
- (void)writeEmojiDefaultsAndNotify:(BOOL)arg1;

@end

