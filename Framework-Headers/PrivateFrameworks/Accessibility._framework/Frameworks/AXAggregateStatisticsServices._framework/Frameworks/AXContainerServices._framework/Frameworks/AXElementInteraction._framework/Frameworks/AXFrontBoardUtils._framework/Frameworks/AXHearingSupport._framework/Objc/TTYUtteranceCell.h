//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <AXHearingSupport/UITextViewDelegate-Protocol.h>

@class CALayer, NSString, TTYUtterance, UITextView;
@protocol TTYUtteranceCellDelegate;

@interface TTYUtteranceCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
    CALayer *_bubbleLayer;
    BOOL _editingUtterance;
    TTYUtterance *_utterance;
    id<TTYUtteranceCellDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<TTYUtteranceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance; // @synthesize editingUtterance=_editingUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) TTYUtterance *utterance; // @synthesize utterance=_utterance;

+ (double)heightForUtterance:(id)arg1 andWidth:(double)arg2;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)adjustTextViewSize;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (struct _NSRange)selectedTextRange;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSendProgressIndex:(unsigned long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateLayout;
- (void)updateUtterance:(id)arg1;

@end

