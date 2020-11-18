//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INExecutionInfo.h>

@class NSArray, NSString;

@interface INIntentExecutionInfo : INExecutionInfo
{
    NSArray *_extensions;
    NSArray *_uiExtensions;
    NSString *_intentClassName;
    long long _preferredCallProvider;
    NSString *_uiExtensionBundleId;
}

@property (readonly, nonatomic) BOOL hasCustomUIExtension;
@property (readonly, copy, nonatomic) NSString *intentClassName; // @synthesize intentClassName=_intentClassName;
@property (readonly, nonatomic) long long preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleId; // @synthesize uiExtensionBundleId=_uiExtensionBundleId;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_extensionsWithError:(id *)arg1;
- (id)_initWithIntentClassName:(id)arg1 preferredCallProvider:(long long)arg2 launchableAppBundleId:(id)arg3 displayableAppBundleId:(id)arg4 extensionBundleId:(id)arg5 uiExtensionBundleId:(id)arg6 containingAppBundleURL:(id)arg7;
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id *)arg2;
- (id)_uiExtensionsWithError:(id *)arg1;
- (BOOL)canRunOnLocalDevice;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntentClassName:(id)arg1 extensionBundleId:(id)arg2;
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)initWithIntentTypeName:(id)arg1;

@end
