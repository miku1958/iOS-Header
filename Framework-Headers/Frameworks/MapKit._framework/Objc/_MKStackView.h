//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSHashTable;
@protocol _MKAnimationStackViewDelegate, _MKStackViewDelegate;

@interface _MKStackView : UIView
{
    NSArray *_stackConstraints;
    NSHashTable *_viewsNeedingWidthConstraints;
    BOOL _bottomConstraintShouldBeGreaterThanOrEqual;
    id<_MKStackViewDelegate> _stackDelegate;
    NSArray *_stackedSubviews;
    id<_MKAnimationStackViewDelegate> _stackAnimationDelegate;
}

@property (nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual; // @synthesize bottomConstraintShouldBeGreaterThanOrEqual=_bottomConstraintShouldBeGreaterThanOrEqual;
@property (weak, nonatomic) id<_MKAnimationStackViewDelegate> stackAnimationDelegate; // @synthesize stackAnimationDelegate=_stackAnimationDelegate;
@property (weak, nonatomic) id<_MKStackViewDelegate> stackDelegate; // @synthesize stackDelegate=_stackDelegate;
@property (copy, nonatomic) NSArray *stackedSubviews; // @synthesize stackedSubviews=_stackedSubviews;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setStackedSubviews:(id)arg1 animated:(BOOL)arg2;

@end

