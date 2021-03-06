//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

@class NSLayoutConstraint, UIViewController;

@interface MFContaineeInputViewController : UIInputViewController
{
    BOOL _allowsSelfSizing;
    UIViewController *_contentViewController;
    NSLayoutConstraint *_heightConstraint;
}

@property (nonatomic) BOOL allowsSelfSizing; // @synthesize allowsSelfSizing=_allowsSelfSizing;
@property (strong, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;

- (void).cxx_destruct;
- (void)_updateContentViewControllerHeight;
- (id)initWithContentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

