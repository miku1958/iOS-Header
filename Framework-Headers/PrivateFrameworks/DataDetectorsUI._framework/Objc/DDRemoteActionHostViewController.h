//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DDRemoteActionHostViewController : _UIRemoteViewController
{
    id<DDRemoteActionHostViewControllerDelegate> _delegate;
}

@property (weak) id<DDRemoteActionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

