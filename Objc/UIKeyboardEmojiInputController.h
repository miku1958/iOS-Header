//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiInputController : NSObject
{
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

@property UIKeyboardEmojiCategory *lastViewedCategory; // @synthesize lastViewedCategory=_lastViewedCategory;

+ (id)activeInputView;
+ (Class)classForInputView;
+ (void)writeEmojiDefaults;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
- (void)emojiUsed:(id)arg1;
- (id)initWithInputView:(id)arg1;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recents;
- (id)skinToneBaseKeyPreferences;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;

@end

