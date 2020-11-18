//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteUI/RUILoaderDelegate-Protocol.h>
#import <RemoteUI/RUIObjectModelDelegate-Protocol.h>
#import <RemoteUI/RUIParserDelegate-Protocol.h>
#import <RemoteUI/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURLSessionConfiguration, RUILoader, RUINavigationController, RUIPage, RUIStyle, UINavigationController, UIViewController;
@protocol RemoteUIControllerDelegate;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate>
{
    RUINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    NSString *_listeningForSMSIdentifier;
    NSString *_SMSAutoFillToken;
    UIViewController *_hostViewController;
    RUILoader *_loader;
    NSString *_userAgentString;
    id<RemoteUIControllerDelegate> _delegate;
    CDUnknownBlockType _loadCompletion;
    NSURLSessionConfiguration *_sessionConfiguration;
    RUIStyle *_style;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RemoteUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property (copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property (strong, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property (strong, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;

- (void).cxx_destruct;
- (void)_beginListeningForSMSAutoFill;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3;
- (void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_modalNavigationWasDismissed;
- (void)_modalViewControllerWasPopped:(id)arg1;
- (void)_removePreviousObjectModelsBackToIdentifier:(id)arg1;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_stopListeningForSMSAutoFill;
- (void)_willPresentObjectModel:(id)arg1 modally:(BOOL)arg2;
- (void)dealloc;
- (id)dismissObjectModelsAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (id)popObjectModelAnimated:(BOOL)arg1;
- (void)pushObjectModel:(id)arg1 animated:(BOOL)arg2;
- (void)removeHandlerForKey:(id)arg1;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)setHandlerForButtonName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForButtonsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForElementName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)setHandlerForElementsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (id)viewControllerForAlertPresentation;

@end

