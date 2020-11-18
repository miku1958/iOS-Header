//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class CCUIAppLauncherModule, SBFApplication, SCUIAssetProvider;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController
{
    SBFApplication *_application;
    SCUIAssetProvider *_assetProvider;
    CCUIAppLauncherModule *_module;
}

@property (weak, nonatomic) CCUIAppLauncherModule *module; // @synthesize module=_module;

- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (void)_addActionForShortcutItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)didBeginInteraction;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;

@end

