//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebView;

@interface _WKInspector : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebInspectorProxy> _inspector;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isElementSelectionActive;
@property (readonly, nonatomic) BOOL isFront;
@property (readonly, nonatomic) BOOL isProfilingPage;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView;

- (void)attach;
- (void)close;
- (void)connect;
- (void)detach;
- (void)hide;
- (void)printErrorToConsole:(id)arg1;
- (void)show;
- (void)showConsole;
- (void)showMainResourceForFrame:(id)arg1;
- (void)showResources;
- (void)showTimelines;
- (void)toggleElementSelection;
- (void)togglePageProfiling;

@end
