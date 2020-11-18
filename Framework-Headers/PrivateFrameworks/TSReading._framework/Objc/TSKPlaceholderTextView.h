//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UILabel;

@interface TSKPlaceholderTextView : UITextView
{
    UILabel *mPlaceholderView;
}

@property (strong, nonatomic) NSString *placeholder;

- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_textDidChange:(id)arg1;
- (void)removeFromSuperview;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;

@end
