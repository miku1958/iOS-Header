//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UIMirrorNinePatchView : UIView
{
    UIImage *_image;
    UIImageView *_imageViews[4];
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 withResizableCornerSize:(struct CGSize)arg2;

@end

