//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface PRImageView : UIView
{
    BOOL _circular;
    UIImage *_image;
}

@property (nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
