//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol PKProgressAlertControllerDelegate;

@interface PKProgressAlertController : UIAlertController
{
    id<PKProgressAlertControllerDelegate> _delegate;
    double _progress;
}

@property (weak, nonatomic) id<PKProgressAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double progress; // @synthesize progress=_progress;

+ (id)newProgressAlertControllerWithTitle:(id)arg1 cancel:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;

@end
