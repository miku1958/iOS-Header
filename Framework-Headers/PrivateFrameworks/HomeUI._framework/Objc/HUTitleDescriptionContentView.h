//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont, UILabel, UIStackView;
@protocol HFStringGenerator;

@interface HUTitleDescriptionContentView : UIView
{
    BOOL _disabled;
    UILabel *_titleLabel;
    id<HFStringGenerator> _titleText;
    UIColor *_titleTextColor;
    id<HFStringGenerator> _descriptionText;
    UIColor *_descriptionTextColor;
    UILabel *_descriptionLabel;
    UIStackView *_stackView;
    NSArray *_verticalLabelConstraints;
    NSArray *_horizontalLabelConstraints;
}

@property (strong, nonatomic) UIFont *descriptionFont;
@property (readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) id<HFStringGenerator> descriptionText; // @synthesize descriptionText=_descriptionText;
@property (strong, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property (nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property (strong, nonatomic) NSArray *horizontalLabelConstraints; // @synthesize horizontalLabelConstraints=_horizontalLabelConstraints;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) id<HFStringGenerator> titleText; // @synthesize titleText=_titleText;
@property (strong, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property (strong, nonatomic) NSArray *verticalLabelConstraints; // @synthesize verticalLabelConstraints=_verticalLabelConstraints;

- (void).cxx_destruct;
- (void)_setupDescriptionLabel;
- (void)_setupStackView;
- (void)_setupTitleLabel;
- (void)_updateLabel:(id)arg1 withContent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

