//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIInterfaceActionGroupDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSString, UIInterfaceActionGroup, UIInterfaceActionGroupView, UIInterfaceActionVisualStyle;
@protocol UIInterfaceActionVisualStyleProviding;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>
{
    BOOL _springLoaded;
    id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceActionGroup *_actionGroup;
}

@property (readonly, copy, nonatomic) UIInterfaceActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
@property (readonly, copy, nonatomic) UIInterfaceActionGroupView *actionGroupView; // @synthesize actionGroupView=_actionGroupView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded; // @synthesize springLoaded=_springLoaded;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (weak, nonatomic) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;

- (void).cxx_destruct;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithActionGroup:(id)arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (void)reloadVisualStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

