//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <AppSupportUI/_UIMultilineTextContentSizing-Protocol.h>

@class NSString, UIView;

@interface NUIContentScrollView : UIScrollView <_UIMultilineTextContentSizing>
{
    double _preferredMaxLayoutWidth;
    struct {
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
    } _containerViewFlags;
    UIView *_contentView;
    long long _horizontalAlignment;
    long long _verticalAlignment;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;

- (void).cxx_destruct;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_nui_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
