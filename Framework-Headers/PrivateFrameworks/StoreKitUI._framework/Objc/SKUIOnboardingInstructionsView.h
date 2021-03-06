//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingInstructionsView : UIView
{
    struct UIEdgeInsets _contentInset;
    long long _contentPosition;
    UILabel *_explanationLabel;
    NSMutableArray *_labelsStack;
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (nonatomic) long long contentPosition; // @synthesize contentPosition=_contentPosition;
@property (readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)explanationAttributedStringWithString:(id)arg1;
+ (id)titleAttributedStringWithString:(id)arg1;
- (void).cxx_destruct;
- (id)_newExplanationLabel;
- (id)_newTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)popLabelState;
- (void)pushLabelState;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentPosition:(long long)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

