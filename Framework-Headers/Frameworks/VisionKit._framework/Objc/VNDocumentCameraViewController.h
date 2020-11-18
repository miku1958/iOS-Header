//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController
{
    id<VNDocumentCameraViewControllerDelegate> _delegate;
    UIViewController *_childViewController;
}

@property (strong, nonatomic, setter=setChildViewController:) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (weak, nonatomic) id<VNDocumentCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

+ (BOOL)isSupported;
+ (id)newDefaultViewController;
+ (id)newInProcessViewController;
+ (id)newViewServiceViewController;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)init;
- (id)initWithChildViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
