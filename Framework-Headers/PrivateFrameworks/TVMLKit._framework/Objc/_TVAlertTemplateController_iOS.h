//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSString, TVImageProxy, UIAlertController;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController_iOS : UIViewController
{
    NSMutableArray *_additionalLabels;
    UIAlertController *_alertController;
    NSArray *_buttonElements;
    TVImageProxy *_imageProxy;
    struct CGSize _imageSize;
    NSString *_message;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)_dismissAlertControllerAnimated:(BOOL)arg1;
- (void)_presentAlertController;
- (void)didMoveToParentViewController:(id)arg1;
- (void)updateWithTemplateElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

