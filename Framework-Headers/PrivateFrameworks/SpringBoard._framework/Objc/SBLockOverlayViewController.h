//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;

@interface SBLockOverlayViewController : UIViewController
{
    id<SBLockOverlayViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<SBLockOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL shouldBeHidden;

- (void).cxx_destruct;
- (id)overlayView;

@end

