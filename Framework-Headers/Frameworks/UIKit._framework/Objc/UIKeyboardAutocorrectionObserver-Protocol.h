//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class TIAutocorrectionList, UIKeyboardAutocorrectionController;

@protocol UIKeyboardAutocorrectionObserver <NSObject>
- (void)autocorrectionController:(UIKeyboardAutocorrectionController *)arg1 didUpdateAutocorrectionList:(TIAutocorrectionList *)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(UIKeyboardAutocorrectionController *)arg1;
@end

