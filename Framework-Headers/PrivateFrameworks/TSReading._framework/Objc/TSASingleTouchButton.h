//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton
{
    UIImage *_touchImage;
    BOOL _showsTouchOnTopWhenHighlighted;
}

@property (nonatomic) BOOL showsTouchOnTopWhenHighlighted; // @synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted;
@property (strong, nonatomic) UIImage *touchImage; // @synthesize touchImage=_touchImage;

- (id)_pressFeedbackImage;
- (struct CGPoint)_pressFeedbackPosition;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

