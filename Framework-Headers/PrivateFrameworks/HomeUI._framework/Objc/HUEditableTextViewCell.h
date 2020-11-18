//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUIconCell.h>

@class NSString, UITextView;
@protocol UITextViewDelegate;

@interface HUEditableTextViewCell : HUIconCell
{
    BOOL _showingPlaceholder;
    NSString *_text;
    NSString *_placeholderText;
    UITextView *_textView;
}

@property (copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property (nonatomic) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property (weak, nonatomic) id<UITextViewDelegate> textViewDelegate;

- (void).cxx_destruct;
- (void)handleUITextViewTextDidBeginEditingNotification:(id)arg1;
- (void)handleUITextViewTextDidEndEditingNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDisabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)trimmedStringForText:(id)arg1;
- (void)updateTextColor;

@end

