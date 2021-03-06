//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <IntentsUI/INUIExtensionHostContextDelegate-Protocol.h>
#import <IntentsUI/_INUIRemoteViewControllerHosting-Protocol.h>

@class INUIExtensionRequestInfo, INUIExtensionViewControllerConfiguration, INWidgetDescriptor, NSExtension, NSString, _INUIExtensionHostContext;
@protocol INUIRemoteViewControllerDelegate, NSCopying;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate>
{
    BOOL _needsStateUpdate;
    BOOL _widgetHost;
    INUIExtensionRequestInfo *_requestInfo;
    id<INUIRemoteViewControllerDelegate> _delegate;
    INUIExtensionViewControllerConfiguration *_configuration;
    INWidgetDescriptor *_widgetDescriptor;
    _INUIExtensionHostContext *_extensionHostContext;
    NSExtension *_activeExtension;
    id<NSCopying> _currentRequestIdentifier;
    struct CGSize _preferredContentSize;
}

@property (strong, nonatomic) NSExtension *activeExtension; // @synthesize activeExtension=_activeExtension;
@property (copy, nonatomic) INUIExtensionViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) id<NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<INUIRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INUIExtensionHostContext *extensionHostContext; // @synthesize extensionHostContext=_extensionHostContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL needsStateUpdate; // @synthesize needsStateUpdate=_needsStateUpdate;
@property (nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property (copy, nonatomic, setter=_setRequestInfo:) INUIExtensionRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property (readonly) Class superclass;
@property (strong, nonatomic) INWidgetDescriptor *widgetDescriptor; // @synthesize widgetDescriptor=_widgetDescriptor;
@property (nonatomic, getter=isWidgetHost) BOOL widgetHost; // @synthesize widgetHost=_widgetHost;

+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg1 descriptor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_getWidgetHostingRemoteViewControllerWithIntent:(id)arg1 extensionMatchingError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)exportedInterface;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateExtensionContextStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(CDUnknownBlockType)arg3;
- (void)desiresInteractivity:(CDUnknownBlockType)arg1;
- (id)disconnect;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)extensionHostContextWillBeginEditing:(id)arg1;
- (void)requestCancellation;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize)arg1;
- (void)setDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIdealConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

