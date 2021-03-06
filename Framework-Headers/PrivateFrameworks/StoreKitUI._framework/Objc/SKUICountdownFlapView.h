//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUICountdownFlapView : UIImageView
{
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    double _factor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
    long long _position;
    NSString *_string;
    UIColor *_textColor;
}

@property (readonly, nonatomic) UIColor *flapBottomColor; // @synthesize flapBottomColor=_flapBottomColor;
@property (readonly, nonatomic) UIColor *flapTopColor; // @synthesize flapTopColor=_flapTopColor;
@property (readonly, nonatomic) long long position; // @synthesize position=_position;
@property (strong, nonatomic) NSString *string; // @synthesize string=_string;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

- (void).cxx_destruct;
- (id)_newBackgroundImageForTop:(int)arg1;
- (id)_newLabel;
- (struct CATransform3D)_transformForAngle:(double)arg1 isTop:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithPosition:(long long)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

