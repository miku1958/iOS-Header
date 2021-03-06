//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICKeyboardNotificationListener : NSObject
{
    struct CGRect _keyboardFrame;
}

@property (nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;

+ (id)sharedListener;
- (struct CGRect)currentKeyboardFrame;
- (void)dealloc;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;
- (id)init;

@end

