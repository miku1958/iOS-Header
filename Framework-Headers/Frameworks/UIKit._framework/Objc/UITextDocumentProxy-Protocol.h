//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyInput-Protocol.h>

@class NSString, UITextInputMode;

@protocol UITextDocumentProxy <UIKeyInput>

@property (readonly, nonatomic) NSString *documentContextAfterInput;
@property (readonly, nonatomic) NSString *documentContextBeforeInput;
@property (readonly, nonatomic) UITextInputMode *documentInputMode;

- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@end
