//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpotlightUI/MFAtomTextViewAtomLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, SPSearchEntity, UIImageView, UILabel;

@interface SPUIAtomView : UIView <MFAtomTextViewAtomLayout>
{
    SPSearchEntity *_searchEntity;
    UIView *_backgroundView;
    UIImageView *_leadingImage;
    UILabel *_textLabel;
    NSArray *_defaultConstraints;
    NSLayoutConstraint *_topToBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
}

@property (strong) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) long long baseWritingDirection;
@property (strong, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *defaultConstraints; // @synthesize defaultConstraints=_defaultConstraints;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *leadingImage; // @synthesize leadingImage=_leadingImage;
@property (strong, nonatomic) SPSearchEntity *searchEntity; // @synthesize searchEntity=_searchEntity;
@property (readonly, nonatomic) struct CGRect selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property (strong, nonatomic) NSLayoutConstraint *topToBaselineConstraint; // @synthesize topToBaselineConstraint=_topToBaselineConstraint;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)suggestedContactIcon;
- (void).cxx_destruct;
- (double)_bottomMargin;
- (id)_font;
- (double)_topToBaselineDelta;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
- (id)viewForLastBaselineLayout;

@end

