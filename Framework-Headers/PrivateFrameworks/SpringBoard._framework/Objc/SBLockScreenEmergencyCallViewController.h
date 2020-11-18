//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController
{
    id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;
- (void)dismiss;
- (void)setBackgroundStyle:(long long)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
