//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController
{
    id<TSWPReferenceLibraryViewControllerDelegate> _delegate;
}

@property (nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;

@end
