//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject
{
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

@property (readonly, copy) NSDictionary *bundleDictionary;

+ (id)_fallbackItemIdentifier:(id)arg1;
+ (id)_urlForBundleIdentifier:(id)arg1;
+ (BOOL)isRestrictedAppBundleIdentifier:(id)arg1;
+ (id)urlForBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)_identifierForBundleIdentifier:(id)arg1;
- (void)_invalidateLookupCache:(id)arg1;
- (void)_populateBundleDictionary;
- (void)dealloc;
- (id)init;
- (id)itemIdentifierForBundleIdentifer:(id)arg1;

@end

