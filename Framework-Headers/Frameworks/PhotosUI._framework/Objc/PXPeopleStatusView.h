//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UIStackView;

@interface PXPeopleStatusView : UIView
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UILabel *_descriptionLabel;
    UIButton *_continueButton;
    unsigned long long _viewState;
    UIStackView *_stackView;
    NSArray *_constraints;
    NSLayoutConstraint *_stackViewY;
    NSLayoutConstraint *_continueButtonBottom;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets _contentInsets;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (strong, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property (strong, nonatomic) NSLayoutConstraint *continueButtonBottom; // @synthesize continueButtonBottom=_continueButtonBottom;
@property (readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) NSLayoutConstraint *stackViewY; // @synthesize stackViewY=_stackViewY;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;

- (void).cxx_destruct;
- (void)_createViews;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
