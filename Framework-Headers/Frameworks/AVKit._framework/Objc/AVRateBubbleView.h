//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface AVRateBubbleView : UIView
{
    NSNumberFormatter *_rateFormatter;
    UIImageView *_lightView;
    UIView *_backdropView;
    UILabel *_rateLabel;
    float _rate;
}

@property (nonatomic) float rate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
