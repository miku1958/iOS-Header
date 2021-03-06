//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIAtomTextViewAtomLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFont, UIImageView, UILabel, _UISearchAtomBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomView : UIView <_UIAtomTextViewAtomLayout>
{
    struct {
        unsigned int enabled:1;
    } _flags;
    UIColor *_atomBackgroundColor;
    UILabel *_textLabel;
    UIImageView *_leadingImage;
    _UISearchAtomBackgroundView *_backgroundView;
    NSArray *_defaultConstraints;
    NSLayoutConstraint *_imageBaselineConstraint;
    NSLayoutConstraint *_imageCenterYConstraint;
    NSArray *_withImageConstraints;
    NSArray *_withoutImageConstraints;
}

@property (strong, nonatomic) UIColor *atomBackgroundColor; // @synthesize atomBackgroundColor=_atomBackgroundColor;
@property (strong, nonatomic) UIFont *atomFont;
@property (strong, nonatomic) _UISearchAtomBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) long long baseWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *imageBaselineConstraint; // @synthesize imageBaselineConstraint=_imageBaselineConstraint;
@property (strong, nonatomic) NSLayoutConstraint *imageCenterYConstraint; // @synthesize imageCenterYConstraint=_imageCenterYConstraint;
@property (strong) UIImageView *leadingImage; // @synthesize leadingImage=_leadingImage;
@property (readonly, nonatomic) struct CGRect selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;
@property (strong) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (copy, nonatomic) NSArray *withImageConstraints; // @synthesize withImageConstraints=_withImageConstraints;
@property (copy, nonatomic) NSArray *withoutImageConstraints; // @synthesize withoutImageConstraints=_withoutImageConstraints;

+ (id)_defaultFont;
+ (id)defaultAtomBackgroundColorForTraitCollection:(id)arg1;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateColors;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;

@end

