//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController
{
    PSUIPrefsListController *_rootListController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)rootListController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setupControllerForToolbar:(id)arg1;

@end

