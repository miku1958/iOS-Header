//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MobileCoreServices/NSSecureCoding-Protocol.h>

@class LSApplicationProxy, NSURL, _LSValidationToken;

@interface LSAppLink : NSObject <NSSecureCoding>
{
    NSURL *_URL;
    LSApplicationProxy *_targetApplicationProxy;
    _LSValidationToken *__validationToken;
}

@property (copy) NSURL *URL; // @synthesize URL=_URL;
@property (strong) _LSValidationToken *_validationToken; // @synthesize _validationToken=__validationToken;
@property long long openStrategy; // @dynamic openStrategy;
@property (strong) LSApplicationProxy *targetApplicationProxy; // @synthesize targetApplicationProxy=_targetApplicationProxy;

+ (BOOL)URLComponentsAreValidForAppLinks:(id)arg1 error:(id *)arg2;
+ (BOOL)_XPCConnectionIsBrowser:(id)arg1;
+ (id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugIn:(id)arg3;
+ (void)_getAppLinksFromPlugInAtIndex:(unsigned long long)arg1 forURLComponents:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 results:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)_getAppLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(BOOL)arg3 XPCConnection:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (long long)_openStrategyForBundleIdentifier:(id)arg1;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 XPCConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_setOpenStrategy:(long long)arg1 forBundleIdentifier:(id)arg2 XPCConnection:(id)arg3;
+ (BOOL)_shouldAppLinkOpenWithStrategy:(long long)arg1 state:(id)arg2 XPCConnection:(id)arg3;
+ (id)dispatchQueue;
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getAppLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)openWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
- (id)_validationTokenPayload;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)openInWebBrowser:(BOOL)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)openWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

