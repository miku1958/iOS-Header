//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNGeminiBadge, CNGeminiResult, NSArray, NSDictionary, UIColor, UIImageView, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CNContactGeminiView : UIView
{
    BOOL _allowsPickerActions;
    BOOL _highlighted;
    BOOL _didCalculateLayout;
    BOOL _isUsingTwoLineLayout;
    CNGeminiResult *_geminiResult;
    UIColor *_highlightedColor;
    NSDictionary *_ab_textAttributes;
    UILayoutGuide *_layoutGuide;
    UILayoutGuide *_geminiLabelLayoutGuide;
    CNGeminiBadge *_geminiBadge;
    UILabel *_typeLabel;
    UILabel *_geminiLabel;
    UIImageView *_chevronView;
    NSArray *_activatedConstraints;
}

@property (copy, nonatomic) NSDictionary *ab_textAttributes; // @synthesize ab_textAttributes=_ab_textAttributes;
@property (strong, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property (nonatomic) BOOL allowsPickerActions; // @synthesize allowsPickerActions=_allowsPickerActions;
@property (strong, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property (nonatomic) BOOL didCalculateLayout; // @synthesize didCalculateLayout=_didCalculateLayout;
@property (strong, nonatomic) CNGeminiBadge *geminiBadge; // @synthesize geminiBadge=_geminiBadge;
@property (strong, nonatomic) UILabel *geminiLabel; // @synthesize geminiLabel=_geminiLabel;
@property (strong, nonatomic) UILayoutGuide *geminiLabelLayoutGuide; // @synthesize geminiLabelLayoutGuide=_geminiLabelLayoutGuide;
@property (strong, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property (nonatomic) BOOL isUsingTwoLineLayout; // @synthesize isUsingTwoLineLayout=_isUsingTwoLineLayout;
@property (strong, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property (strong, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)calculateLayoutIfNeeded;
- (BOOL)doesLayoutRequireTwoLines;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)localizedChannelUsageFromGeminiResult:(id)arg1;
- (id)localizedLabelFromGeminiResult:(id)arg1;
- (void)setNeedsCalculateLayout;
- (BOOL)shouldDisplayBadge;
- (BOOL)shouldDisplayChevron;
- (id)singleLineLayoutConstraints;
- (struct CGSize)sizeForSingleLineLayoutFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeForTwoLineLayoutFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)twoLineLayoutConstraints;
- (void)updateConstraints;

@end

