//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface RUINavigationController : UINavigationController
{
    unsigned long long _ruiSupportedInterfaceOrientations;
    CDUnknownBlockType _menuDismissalHandler;
}

@property (copy, nonatomic) CDUnknownBlockType menuDismissalHandler; // @synthesize menuDismissalHandler=_menuDismissalHandler;

- (void).cxx_destruct;
- (void)_menuButtonPressed:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)loadView;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
