//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView;

@interface AFUIPasscodeBlurView : UIView
{
    MTMaterialView *_materialView;
    UIView *_lightenSourceOverView;
    UIView *_plusDView;
}

@property (strong, nonatomic) UIView *lightenSourceOverView; // @synthesize lightenSourceOverView=_lightenSourceOverView;
@property (strong, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property (strong, nonatomic) UIView *plusDView; // @synthesize plusDView=_plusDView;

- (void).cxx_destruct;
- (void)_setPlusDBackgroundColorWithWeighting:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
