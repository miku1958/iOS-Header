//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsCore/INCExecutionInfo.h>

@class NSArray, NSString;

@interface INCIntentExecutionInfo : INCExecutionInfo
{
    NSArray *_extensions;
    NSArray *_uiExtensions;
    NSString *_intentClassName;
    NSString *_extensionBundleId;
    NSString *_uiExtensionBundleId;
}

@property (readonly, copy, nonatomic) NSString *extensionBundleId; // @synthesize extensionBundleId=_extensionBundleId;
@property (readonly, nonatomic) BOOL hasCustomUIExtension;
@property (readonly, copy, nonatomic) NSString *intentClassName; // @synthesize intentClassName=_intentClassName;
@property (readonly, copy, nonatomic) NSString *uiExtensionBundleId; // @synthesize uiExtensionBundleId=_uiExtensionBundleId;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_extensionsWithError:(id *)arg1;
- (id)_initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2 displayableAppBundleId:(id)arg3 extensionBundleId:(id)arg4 uiExtensionBundleId:(id)arg5 containingAppBundleURL:(id)arg6;
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id *)arg2;
- (id)_uiExtensionsWithError:(id *)arg1;
- (BOOL)canRunOnLocalDevice;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)initWithIntentTypeName:(id)arg1;

@end
