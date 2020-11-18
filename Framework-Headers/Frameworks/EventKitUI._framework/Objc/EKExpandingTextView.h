//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <EventKitUI/UITextViewDelegate-Protocol.h>

@class NSString, UILabel;

@interface EKExpandingTextView : UITextView <UITextViewDelegate>
{
    UILabel *_placeholderLabel;
    BOOL _allowEnclosingViewScroll;
    struct CGSize _previousIntrinsicContentSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_shouldScrollEnclosingScrollView;
- (void)_updatePlaceholder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setAttributedText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;

@end

