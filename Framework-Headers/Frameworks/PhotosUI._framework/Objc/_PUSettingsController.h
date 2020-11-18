//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeToolsUI/PTUISettingsController.h>

@class PTSettings, PXSettings, UINavigationController;

__attribute__((visibility("hidden")))
@interface _PUSettingsController : PTUISettingsController
{
    BOOL _hasWarnedForOverrides;
    UINavigationController *_searchNavigationController;
    PTSettings *_rootSettings;
    CDUnknownBlockType _onViewDidDisappearBlock;
    CDUnknownBlockType _dismissButtonFactory;
    CDUnknownBlockType _ellipsisBarButtonItemFactory;
    UINavigationController *_configurationsNavigationController;
}

@property (readonly, nonatomic) UINavigationController *configurationsNavigationController; // @synthesize configurationsNavigationController=_configurationsNavigationController;
@property (readonly, nonatomic) PXSettings *currentSettings;
@property (copy, nonatomic) CDUnknownBlockType dismissButtonFactory; // @synthesize dismissButtonFactory=_dismissButtonFactory;
@property (copy, nonatomic) CDUnknownBlockType ellipsisBarButtonItemFactory; // @synthesize ellipsisBarButtonItemFactory=_ellipsisBarButtonItemFactory;
@property (nonatomic) BOOL hasWarnedForOverrides; // @synthesize hasWarnedForOverrides=_hasWarnedForOverrides;
@property (copy, nonatomic) CDUnknownBlockType onViewDidDisappearBlock; // @synthesize onViewDidDisappearBlock=_onViewDidDisappearBlock;
@property (readonly, nonatomic) PTSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
@property (readonly, nonatomic) UINavigationController *searchNavigationController; // @synthesize searchNavigationController=_searchNavigationController;

- (void).cxx_destruct;
- (void)_clearSettingsOverride;
- (void)_invalidateNavigationItems;
- (void)_updateNavigationItemOfViewController:(id)arg1;
- (void)_warnForSettingsOverride;
- (void)callOnViewDidDisappearBlock;
- (void)handleEllipsisBarButtonItem:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end
