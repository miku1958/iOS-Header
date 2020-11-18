//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKController;
@protocol MUContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUContentViewController : UIViewController
{
    id<MUContentViewControllerDelegate> _delegate;
    AKController *_annotationController;
}

@property (strong) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property (weak) id<MUContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;

@end

