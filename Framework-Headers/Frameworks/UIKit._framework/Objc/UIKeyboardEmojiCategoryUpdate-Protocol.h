//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardEmojiKeyDisplayController;

@protocol UIKeyboardEmojiCategoryUpdate <NSObject>

@property (nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;

- (void)updateToCategory:(long long)arg1;

@optional
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;
@end

