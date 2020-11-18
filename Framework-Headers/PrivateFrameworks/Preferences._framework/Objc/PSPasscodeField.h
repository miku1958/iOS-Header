//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/UIKeyInput-Protocol.h>

@class NSArray, NSMutableArray, NSMutableString, NSString, UIColor;
@protocol PSPasscodeFieldDelegate;

@interface PSPasscodeField : UIView <UIKeyInput>
{
    NSMutableArray *_dashViews;
    NSMutableArray *_dotViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
    BOOL _securePasscodeEntry;
    id<PSPasscodeFieldDelegate> _delegate;
    unsigned long long _numberOfEntryFields;
    UIColor *_foregroundColor;
    long long _keyboardAppearance;
    NSArray *_fieldSpacing;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (strong, nonatomic) NSArray *fieldSpacing; // @synthesize fieldSpacing=_fieldSpacing;
@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long numberOfEntryFields; // @synthesize numberOfEntryFields=_numberOfEntryFields;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL securePasscodeEntry; // @synthesize securePasscodeEntry=_securePasscodeEntry;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)deleteBackward;
- (BOOL)hasText;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (void)layoutSubviews;
- (void)passcodeFieldTapped:(id)arg1;
- (void)setStringValue:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)stringValue;

@end

