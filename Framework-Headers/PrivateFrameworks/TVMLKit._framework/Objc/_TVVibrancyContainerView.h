//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVVisualEffectView.h>

@class UIView;

@interface _TVVibrancyContainerView : _TVVisualEffectView
{
    UIView *_containedView;
}

@property (readonly, weak, nonatomic) UIView *containedView; // @synthesize containedView=_containedView;

- (void).cxx_destruct;
- (id)initWithEffect:(id)arg1 containingView:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

