//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/UITextViewDelegate-Protocol.h>

@class NSString, UIButton, UILabel, UITextView;
@protocol PLPhotoCommentEntryViewDelegate;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate>
{
    UILabel *placeholderLabel;
    UILabel *_placeholderLabel;
    UITextView *_textView;
    UIButton *_postButton;
    id<PLPhotoCommentEntryViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PLPhotoCommentEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property (readonly, strong, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void)clearText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)setText:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (id)trimmedText;

@end
