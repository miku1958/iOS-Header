//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIView;

@interface MusicHUDViewController : UIViewController
{
    UIView *_contentView;
    UIView *_hudView;
    BOOL _didPlayAnimation;
    BOOL _shouldDismissHUDWhenPossible;
    long long _type;
    BOOL _shouldWaitForExplicitDismissal;
    double _dismissalDelay;
    NSString *_text;
}

@property (nonatomic) double dismissalDelay; // @synthesize dismissalDelay=_dismissalDelay;
@property (nonatomic) BOOL shouldWaitForExplicitDismissal; // @synthesize shouldWaitForExplicitDismissal=_shouldWaitForExplicitDismissal;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)_dismissHUDAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playAnimation;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithHUDType:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentFromRootViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
