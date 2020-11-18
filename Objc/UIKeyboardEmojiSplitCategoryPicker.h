//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardEmojiSplit.h>

#import <UIKit/UIKeyboardEmojiCategoryControl-Protocol.h>

@class NSString, UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCategoryController *_categoryController;
    BOOL _whiteText;
    long long _currentSelected;
    long long _lastUsedCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property BOOL whiteText; // @synthesize whiteText=_whiteText;

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)receiveNotifictaion:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)symbolForRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForRow:(long long)arg1;
- (void)updateCategorySelectedIndicator:(long long)arg1;

@end

