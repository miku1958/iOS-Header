//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImage, UIImageView;
@protocol ICDocCamPageContentViewTapDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamPageContentViewController : UIViewController
{
    unsigned long long _pageIndex;
    UIImage *_image;
    id<ICDocCamPageContentViewTapDelegate> _tapDelegate;
    UIImageView *_imageView;
}

@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (weak, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (weak, nonatomic) id<ICDocCamPageContentViewTapDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;

+ (double)leadingTrailingOffset:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void)handleSingleTap:(id)arg1;
- (void)viewDidLoad;

@end
