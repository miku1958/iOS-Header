//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIIPhoneProductPageView : UIView
{
    UIView *_view;
    UIView *_bannerView;
    double _bannerOffset;
}

@property (nonatomic) double bannerOffset; // @synthesize bannerOffset=_bannerOffset;
@property (strong, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)animateYPosition:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

