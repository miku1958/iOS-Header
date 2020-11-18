//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import <iPhotoMigrationSupport/UIKeyInput-Protocol.h>

@class BLModalPresenterRootViewController, NSMutableArray, NSString;

@interface BLModalPresenter : UIWindow <UIKeyInput>
{
    BLModalPresenterRootViewController *_rootViewController;
    NSMutableArray *_controllers;
    struct CGRect _keyboard;
    long long _lockCount;
    BOOL _keyboardVisible;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;

+ (id)presenter;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)configureForOffscreen:(id)arg1 orientation:(long long)arg2;
- (void)configureForOncreen:(id)arg1 orientation:(long long)arg2;
- (void)dealloc;
- (void)deleteBackward;
- (struct CGSize)formSheetSizeForController:(id)arg1 withOrientation:(long long)arg2;
- (BOOL)hasText;
- (id)hidden;
- (void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)insertText:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)keyboardVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutForOrientation:(long long)arg1;
- (void)lockKeyboard;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)orientationDidChange:(id)arg1;
- (void)orientationWillChange:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)unlockKeyboard;

@end

