//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PUActivityProgressController;

@interface PHActivityProgressViewController : UIViewController
{
    PUActivityProgressController *_pu_activityProgressController;
    double _progress;
}

@property (copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property (nonatomic) double progress; // @synthesize progress=_progress;

- (void).cxx_destruct;
- (void)_commonPHActivityProgressViewControllerInitialization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

