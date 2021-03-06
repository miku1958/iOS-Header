//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class RUIStyle, UIViewController;

@interface RUINavigationController : UINavigationController
{
    unsigned long long _ruiSupportedInterfaceOrientations;
    RUIStyle *_style;
    unsigned long long _ruiModalPresentationStyle;
    UIViewController *_hostViewController;
    CDUnknownBlockType _menuDismissalHandler;
    CDUnknownBlockType _viewDidDisappearHandler;
}

@property (weak, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property (copy, nonatomic) CDUnknownBlockType menuDismissalHandler; // @synthesize menuDismissalHandler=_menuDismissalHandler;
@property (nonatomic) unsigned long long ruiModalPresentationStyle; // @synthesize ruiModalPresentationStyle=_ruiModalPresentationStyle;
@property (strong, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property (copy, nonatomic) CDUnknownBlockType viewDidDisappearHandler; // @synthesize viewDidDisappearHandler=_viewDidDisappearHandler;

- (void).cxx_destruct;
- (void)_menuButtonPressed:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

