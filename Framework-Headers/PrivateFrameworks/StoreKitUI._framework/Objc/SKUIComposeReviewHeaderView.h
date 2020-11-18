//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIComposeTextFieldListViewDelegate-Protocol.h>

@class NSString, SKStarRatingControl, SKUIComposeTextFieldListView, SKUIReviewMetadata, UIResponder;
@protocol SKUIComposeReviewHeaderDelegate;

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate>
{
    id<SKUIComposeReviewHeaderDelegate> _delegate;
    SKStarRatingControl *_ratingControl;
    SKUIReviewMetadata *_review;
    BOOL _showNicknameField;
    long long _style;
    SKUIComposeTextFieldListView *_textFieldListView;
}

@property (readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIComposeReviewHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;
@property (readonly, nonatomic) NSString *nickname;
@property (nonatomic) float rating;
@property (strong, nonatomic) SKUIReviewMetadata *review; // @synthesize review=_review;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (long long)numberOfColumnsInTextFieldList:(id)arg1;
- (long long)numberOfFieldsInTextFieldList:(id)arg1;
- (void)sizeToFit;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;
- (void)textFieldListValidityDidChange:(id)arg1;
- (void)textFieldListValuesDidChange:(id)arg1;

@end

