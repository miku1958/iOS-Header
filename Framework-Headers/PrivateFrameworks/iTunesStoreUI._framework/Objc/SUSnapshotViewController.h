//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIImageView;

@interface SUSnapshotViewController : UIViewController
{
    UIViewController *_originalViewController;
    long long _originalOrientation;
    UIActivityIndicatorView *_activityIndicatorView;
    UIImageView *_imageView;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property (strong, nonatomic) UIViewController *originalViewController; // @synthesize originalViewController=_originalViewController;

- (void).cxx_destruct;
- (long long)_currentOrientation;
- (id)_snapshotOfView:(id)arg1;
- (void)_startActivityIndicator;
- (void)_stopActivityIndicator;
- (id)initWithOriginal:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

