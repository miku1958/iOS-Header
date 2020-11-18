//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface BPSCheckMarkView : UIView
{
    BOOL _isChecked;
    UIImageView *_imageView;
}

@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isChecked; // @synthesize isChecked=_isChecked;

- (void).cxx_destruct;
- (id)checkedImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)uncheckedImage;

@end

