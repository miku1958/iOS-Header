//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKeyboardEmojiCategoryUpdateDelegate-Protocol.h>

@class NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiKeyView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate>
{
    UIKeyboardEmojiKeyView *_inputView;
    UIKeyboardEmojiKeyView *_categoryView;
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

@property (strong, nonatomic) UIKeyboardEmojiKeyView *categoryView; // @synthesize categoryView=_categoryView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIKeyboardEmojiKeyView *inputView; // @synthesize inputView=_inputView;
@property UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) Class superclass;

+ (Class)classForCategoryControl:(long long)arg1;
+ (Class)classForInputView:(long long)arg1;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
- (void)dealloc;
- (void)emojiUsed:(id)arg1;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (BOOL)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)init;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long *)arg2;
- (id)recents;
- (long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2;
- (void)reloadForCategory:(long long)arg1 withSender:(id)arg2;
- (id)skinToneBaseKeyPreferences;
- (void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (BOOL)userHasSelectedSkinToneEmoji;

@end

