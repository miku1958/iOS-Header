//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUChevronButton, HUColoredButton, NSArray, UILabel;
@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView
{
    id<HUGridEmptyHomeViewDelegate> _delegate;
    UILabel *_instructionsLabel;
    HUColoredButton *_addAccessoryButton;
    HUChevronButton *_learnToAddAccessoryButton;
    HUChevronButton *_storeButton;
    NSArray *_constraints;
}

@property (strong, nonatomic) HUColoredButton *addAccessoryButton; // @synthesize addAccessoryButton=_addAccessoryButton;
@property (readonly, nonatomic) BOOL canAddAccessories;
@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (weak, nonatomic) id<HUGridEmptyHomeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property (strong, nonatomic) HUChevronButton *learnToAddAccessoryButton; // @synthesize learnToAddAccessoryButton=_learnToAddAccessoryButton;
@property (strong, nonatomic) HUChevronButton *storeButton; // @synthesize storeButton=_storeButton;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_addNewAccessory:(id)arg1;
- (void)_openLearnToAddAccessories:(id)arg1;
- (void)_openStore:(id)arg1;
- (void)_setupCommonAppearance;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;

@end
