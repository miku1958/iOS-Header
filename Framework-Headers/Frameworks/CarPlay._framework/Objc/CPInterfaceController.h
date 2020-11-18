//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPTemplateDelegate-Protocol.h>
#import <CarPlay/CPTemplateServiceClientInterface-Protocol.h>

@class CPTemplate, CPWindow, NSArray, NSMutableArray, NSString, NSXPCConnection;
@protocol CPInterfaceControllerDelegate, CPTemplateProviding, CPWindowProviding;

@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface>
{
    BOOL _prefersDarkUserInterfaceStyle;
    id<CPInterfaceControllerDelegate> _delegate;
    CPTemplate *_rootTemplate;
    NSXPCConnection *_connection;
    id<CPTemplateProviding> _templateProvider;
    NSMutableArray *_templateStack;
    CPTemplate *_presentedTemplate;
    CPTemplate *_lastPresentedTemplate;
    CPWindow *_carWindow;
    id<CPWindowProviding> _windowProvider;
}

@property (strong, nonatomic) CPWindow *carWindow; // @synthesize carWindow=_carWindow;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPInterfaceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CPTemplate *lastPresentedTemplate; // @synthesize lastPresentedTemplate=_lastPresentedTemplate;
@property (nonatomic) BOOL prefersDarkUserInterfaceStyle; // @synthesize prefersDarkUserInterfaceStyle=_prefersDarkUserInterfaceStyle;
@property (strong, nonatomic) CPTemplate *presentedTemplate; // @synthesize presentedTemplate=_presentedTemplate;
@property (strong, nonatomic) CPTemplate *rootTemplate; // @synthesize rootTemplate=_rootTemplate;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<CPTemplateProviding> templateProvider; // @synthesize templateProvider=_templateProvider;
@property (strong, nonatomic) NSMutableArray *templateStack; // @synthesize templateStack=_templateStack;
@property (readonly, nonatomic) NSArray *templates;
@property (readonly, nonatomic) CPTemplate *topTemplate;
@property (weak, nonatomic) id<CPWindowProviding> windowProvider; // @synthesize windowProvider=_windowProvider;

+ (id)_templateClientInterface;
+ (id)_templateProvidingInterface;
+ (void)_whitelistClassesForBaseTemplateProvider:(id)arg1;
- (void).cxx_destruct;
- (id)_activeMapTemplate;
- (BOOL)_applicationHasMapsEntitlement;
- (void)_connectToListenerEndpoint:(id)arg1;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_init;
- (void)_invalidate;
- (id)_listenerEndpointForSettings:(id)arg1;
- (void)_presentActionSheetTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)_presentAlertTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)_pushGridTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_pushListTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_pushMapTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_pushSearchTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_pushTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_pushVoiceControlTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)_sceneConnect:(id)arg1;
- (id)_synchronousTemplateProvider;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)clientExceededHierarchyDepthLimit;
- (void)dismissTemplateAnimated:(BOOL)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (BOOL)isCarPlayCanvasActive;
- (void)popTemplateAnimated:(BOOL)arg1;
- (void)popToRootTemplateAnimated:(BOOL)arg1;
- (void)popToTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)presentTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)pushTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)setRootTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)templateDidAppear:(id)arg1 animated:(BOOL)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2;
- (void)templateDidDismiss:(id)arg1;
- (void)templateIdentifierDidDismiss:(id)arg1;
- (void)templateIdentifierDidPop:(id)arg1;
- (void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2;
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;

@end
