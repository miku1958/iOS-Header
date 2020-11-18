//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIComposeReviewHeaderDelegate-Protocol.h>
#import <StoreKitUI/UITextContentViewDelegate-Protocol.h>

@class NSString, SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIScrollView;
@protocol SKUIComposeReviewViewDelegate;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>
{
    long long _currentBodyLength;
    id<SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect _keyboardFrame;
    struct CGRect _remoteKeyboardFrame;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    long long _style;
    SUTextContentView *_textContentView;
}

@property (readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) float rating;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)_body;
- (void)_delayedUpdateReviewLength;
- (BOOL)_isReviewTextOptional;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_layoutComposeView;
- (void)_layoutLoadingView;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)arg1;
- (id)_reviewPlaceholder;
- (void)_showComposeView;
- (void)_showLoadingView;
- (void)_updateContentSize;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (id)copyReview;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setFrame:(struct CGRect)arg1;
- (void)setReview:(id)arg1;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (void)textContentViewDidChange:(id)arg1;

@end

