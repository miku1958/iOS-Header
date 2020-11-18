//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CNContact, NSArray, NSLayoutYAxisAnchor, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNStarkNameViewController : UIViewController
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIStackView *_stackView;
    NSArray *_layoutConstraints;
    CNContact *_contact;
}

@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)viewDidLoad;

@end
