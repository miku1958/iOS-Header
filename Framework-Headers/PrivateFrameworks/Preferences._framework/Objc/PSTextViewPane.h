//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane
{
    UITextView *_textView;
}

- (void).cxx_destruct;
- (BOOL)handlesDoneButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setText:(id)arg1;

@end
