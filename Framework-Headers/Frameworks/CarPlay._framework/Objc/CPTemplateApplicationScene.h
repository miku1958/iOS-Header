//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScene.h>

#import <CarPlay/CPWindowProviding-Protocol.h>
#import <CarPlay/UICoordinateSpace-Protocol.h>
#import <CarPlay/_UIContextBinderContextCreationPolicyHolding-Protocol.h>
#import <CarPlay/_UISceneUIWindowHosting-Protocol.h>

@class CPInterfaceController, CPWindow, NSString, UIScreen, UITraitCollection, _UIContextBinder;
@protocol CPTemplateApplicationSceneDelegate, NSObject, UICoordinateSpace;

@interface CPTemplateApplicationScene : UIScene <_UIContextBinderContextCreationPolicyHolding, CPWindowProviding, _UISceneUIWindowHosting, UICoordinateSpace>
{
    _UIContextBinder *_contextBinder;
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    long long _screenRequestedOverscanCompensation;
    id<NSObject> _sceneWillConnectObserver;
    id<NSObject> _didFinishLaunchingObserver;
    BOOL _sceneWillConnect;
    CPWindow *_carWindow;
    CPInterfaceController *_interfaceController;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) id<UICoordinateSpace> _coordinateSpace;
@property (readonly, nonatomic) long long _interfaceOrientation;
@property (readonly, nonatomic) UIScreen *_screen;
@property (readonly, nonatomic) UITraitCollection *_traitCollection;
@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (strong, nonatomic) CPWindow *carWindow; // @synthesize carWindow=_carWindow;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<CPTemplateApplicationSceneDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
@property (readonly) Class superclass;

+ (BOOL)_hostsWindows;
+ (id)activeTemplateScene;
- (void).cxx_destruct;
- (id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
- (void)_attachWindow:(id)arg1;
- (id)_componentForKey:(id)arg1;
- (id)_definition;
- (void)_deliverInterfaceControllerToDelegate;
- (void)_detachWindow:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (void)_invalidate;
- (BOOL)_permitContextCreationForBindingDescription:(CDStruct_a002d41c)arg1;
- (void)_readySceneForConnection;
- (struct UIEdgeInsets)_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (void)_updateVisibleWindowOrderWithTest:(CDUnknownBlockType)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;

@end
