//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPProvider.h>

@class NSString, NSURL;

@interface FPExtensionProvider : FPProvider
{
    NSURL *_bundleURL;
    BOOL _supportsEnumeration;
    BOOL _isAvailableSystemWide;
    NSString *_containingBundleIdentifier;
}

+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 domain:(id)arg2 localizedName:(id)arg3 storageURL:(id)arg4 supportedFileTypes:(id)arg5 type:(long long)arg6 bundleURL:(id)arg7 supportsEnumeration:(BOOL)arg8 isAvailableSystemWide:(BOOL)arg9 isReadOnly:(BOOL)arg10 isEnabled:(BOOL)arg11 containingBundleIdentifier:(id)arg12 usesUniqueItemIdentifiers:(BOOL)arg13;
- (id)bundleURL;
- (id)containingBundleIdentifier;
- (id)initWithProperties:(id)arg1 domain:(id)arg2;
- (BOOL)isAvailableSystemWide;
- (BOOL)supportsEnumeration;

@end

