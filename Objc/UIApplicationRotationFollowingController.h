//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController
{
    BOOL _sizesWindowToScene;
}

@property (nonatomic) BOOL sizesWindowToScene; // @synthesize sizesWindowToScene=_sizesWindowToScene;

- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (BOOL)_canShowWhileLocked;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (id)_topMostWindow;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;

@end

