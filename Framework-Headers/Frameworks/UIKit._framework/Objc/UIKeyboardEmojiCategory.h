//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject
{
    long long _categoryType;
    NSArray *_emoji;
    long long _lastVisibleFirstEmojiIndex;
    NSString *_displaySymbol;
}

@property long long categoryType; // @synthesize categoryType=_categoryType;
@property (readonly, getter=displaySymbol) NSString *displaySymbol; // @synthesize displaySymbol=_displaySymbol;
@property (strong) NSArray *emoji; // @synthesize emoji=_emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex; // @synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex;
@property (readonly, nonatomic, getter=name) NSString *name;

+ (id)categories;
+ (id)categoryForType:(long long)arg1;
+ (unsigned long long)categoryIndexForCategoryType:(long long)arg1;
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)arg1;
+ (id)displayName:(long long)arg1;
+ (id)emojiCategoryStringForCategoryType:(long long)arg1;
+ (long long)emojiCategoryTypeForCategoryString:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (id)enabledCategoryIndexes;
+ (id)fallbackDisplayName:(long long)arg1;
+ (unsigned long long)hasVariantsForEmoji:(id)arg1;
+ (BOOL)isRTLMode;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (long long)numberOfCategories;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;
- (void)dealloc;
- (void)releaseCategories;

@end

