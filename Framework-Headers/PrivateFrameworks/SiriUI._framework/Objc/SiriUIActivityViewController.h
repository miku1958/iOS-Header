//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;

@interface SiriUIActivityViewController : UIActivityViewController
{
    id<SiriUIActivityViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<SiriUIActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end

