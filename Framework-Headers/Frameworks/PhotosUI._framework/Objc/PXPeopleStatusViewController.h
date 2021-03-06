//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PXPeopleStatusView;
@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController
{
    id<PXPeopleStatusViewDelegate> _delegate;
    PXPeopleStatusView *_statusView;
}

@property (weak, nonatomic) id<PXPeopleStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) PXPeopleStatusView *statusView; // @synthesize statusView=_statusView;

- (void).cxx_destruct;
- (void)_continuePressed:(id)arg1;
- (void)viewDidLoad;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

