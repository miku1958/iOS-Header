//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface PXUIButton : UIButton
{
    BOOL _allowAnimatedHighlighting;
    struct UIEdgeInsets _hitTestOutset;
}

@property (nonatomic) BOOL allowAnimatedHighlighting; // @synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting;
@property (nonatomic) struct UIEdgeInsets hitTestOutset; // @synthesize hitTestOutset=_hitTestOutset;

- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
