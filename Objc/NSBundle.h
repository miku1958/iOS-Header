//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface NSBundle : NSObject
{
    unsigned long long _flags;
    id _cfBundle;
    unsigned long long _reserved2;
    Class _principalClass;
    id _initialPath;
    id _resolvedPath;
    id _reserved3;
    id _lock;
}

@property (readonly, copy) NSURL *appStoreReceiptURL;
@property (readonly, copy) NSString *builtInPlugInsPath;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *developmentLocalization;
@property (readonly, copy) NSArray *executableArchitectures;
@property (readonly, copy) NSString *executablePath;
@property (readonly, copy) NSURL *executableURL;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) NSArray *localizations;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class principalClass;
@property (readonly, copy) NSString *privateFrameworksPath;
@property (readonly, copy) NSURL *privateFrameworksURL;
@property (readonly, copy) NSString *resourcePath;
@property (readonly, copy) NSURL *resourceURL;
@property (readonly, copy) NSString *sharedFrameworksPath;
@property (readonly, copy) NSURL *sharedFrameworksURL;
@property (readonly, copy) NSString *sharedSupportPath;
@property (readonly, copy) NSURL *sharedSupportURL;

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)bundleForClass:(Class)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)debugDescription;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (void)setSystemLanguages:(id)arg1;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (void)__static;
- (struct __CFBundle *)_cfBundle;
- (struct __CFBundle *)_cfBundleIfPresent;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (id)bundleLanguages;
- (Class)classNamed:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (BOOL)load;
- (BOOL)loadAndReturnError:(id *)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (BOOL)preflightAndReturnError:(id *)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (BOOL)unload;
- (unsigned long long)versionNumber;

@end

