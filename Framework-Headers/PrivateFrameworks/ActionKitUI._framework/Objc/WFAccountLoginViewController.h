//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;

@interface WFAccountLoginViewController : UIViewController
{
    id<WFAccountLoginViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<WFAccountLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (id)initWithAccountClass:(Class)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
