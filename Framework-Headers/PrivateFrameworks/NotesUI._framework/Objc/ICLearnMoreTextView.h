//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView
{
    BOOL _isShowingLearnMore;
    NSString *_helpTopicID;
    NSString *_helpVersion;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_parentViewController;
}

@property (strong, nonatomic) NSString *helpTopicID; // @synthesize helpTopicID=_helpTopicID;
@property (strong, nonatomic) NSString *helpVersion; // @synthesize helpVersion=_helpVersion;
@property (nonatomic) BOOL isShowingLearnMore; // @synthesize isShowingLearnMore=_isShowingLearnMore;
@property (weak, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;

- (void).cxx_destruct;
- (BOOL)_accessibilityHasTextOperations;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)attributedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (void)didTapLearnMore;
- (BOOL)isAccessibilityElement;
- (void)resetTextView;
- (void)setAttributedText:(id)arg1 addLearnMore:(BOOL)arg2;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(BOOL)arg4;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(BOOL)arg5;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)updateForAccessibilityDarkerSystemColors;

@end

