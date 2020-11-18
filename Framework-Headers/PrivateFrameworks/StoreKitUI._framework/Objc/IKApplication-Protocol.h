//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class IKAppDocument, IKViewElementRegistry, NSDictionary, NSString, NSURL;
@protocol IKAppDataStoring, IKAppUserDefaultsStoring;

@protocol IKApplication <NSObject>
- (NSString *)appIdentifier;
- (NSURL *)appJSURL;
- (id<IKAppDataStoring>)localStorage;
- (BOOL)shouldIgnoreJSValidation;
- (id<IKAppUserDefaultsStoring>)userDefaultsStorage;
- (NSString *)vendorIdentifier;
- (id<IKAppDataStoring>)vendorStorage;

@optional
- (IKAppDocument *)activeDocument;
- (BOOL)appIsPrivileged;
- (BOOL)appIsTrusted;
- (NSURL *)appJSCachePath;
- (NSDictionary *)appLaunchParams;
- (NSString *)appLaunchParamsResolvedBootURLKey;
- (NSURL *)appLocalJSURL;
- (NSDictionary *)appTraitCollection;
- (BOOL)appUsesDefaultStyleSheets;
- (NSString *)bagBootURLKey;
- (NSURL *)offlineJSURL;
- (BOOL)shouldAllowRemoteInspection;
- (IKViewElementRegistry *)viewElementRegistry;
@end

