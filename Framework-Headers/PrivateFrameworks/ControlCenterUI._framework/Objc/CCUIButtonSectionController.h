//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>

#import <ControlCenterUI/CCUIButtonControllerDelegate-Protocol.h>
#import <ControlCenterUI/CCUIButtonStackPagingViewDelegate-Protocol.h>
#import <ControlCenterUI/_UISettingsKeyPathObserver-Protocol.h>

@class CCUIControlCenterButtonSectionSettings, NSMutableArray, NSMutableDictionary, NSString;

@interface CCUIButtonSectionController : CCUIControlCenterSectionViewController <CCUIButtonControllerDelegate, CCUIButtonStackPagingViewDelegate, _UISettingsKeyPathObserver>
{
    NSMutableArray *_modules;
    NSMutableDictionary *_modulesByID;
    NSMutableDictionary *_moduleControllersByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CCUIControlCenterButtonSectionSettings *settings; // @dynamic settings;
@property (readonly) Class superclass;

+ (Class)buttonControllerClass;
+ (Class)viewClass;
- (void).cxx_destruct;
- (void)_activateModule:(id)arg1;
- (void)_addButtonModule:(id)arg1;
- (id)_allButtonControllers;
- (id)_allButtonModules;
- (BOOL)_buttonEnabledForIdentifier:(id)arg1;
- (id)_controllerForIdentifier:(id)arg1;
- (id)_controllerForModule:(id)arg1;
- (void)_deactivateModule:(id)arg1;
- (void)_reloadModulesFromScratch;
- (id)_sortKeyForModule:(id)arg1;
- (id)_supportedButtonModuleClasses;
- (void)_updateSettings;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2;
- (BOOL)buttonControllerShouldUseSmallButtons:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (id)init;
- (id)sectionIdentifier;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
