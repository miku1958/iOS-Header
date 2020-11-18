//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyInput-Protocol.h>

@class NSString, NSUUID, UITextInputMode;

@protocol UITextDocumentProxy <UIKeyInput>

@property (readonly, nonatomic) NSString *documentContextAfterInput;
@property (readonly, nonatomic) NSString *documentContextBeforeInput;
@property (readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property (readonly, nonatomic) UITextInputMode *documentInputMode;
@property (readonly, nonatomic) NSString *selectedText;

- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@end

