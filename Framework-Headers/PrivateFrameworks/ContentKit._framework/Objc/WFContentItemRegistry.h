//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface WFContentItemRegistry : NSObject
{
    struct os_unfair_lock_s _discoveryLock;
    NSMutableDictionary *_contentItemClassesByType;
    NSMutableSet *_allItemClasses;
}

@property (readonly, nonatomic) NSMutableSet *allItemClasses; // @synthesize allItemClasses=_allItemClasses;
@property (readonly, nonatomic) NSSet *allOwnedTypes;
@property (readonly, nonatomic) NSSet *contentItemClasses;
@property (readonly, nonatomic) NSMutableDictionary *contentItemClassesByType; // @synthesize contentItemClassesByType=_contentItemClassesByType;
@property (readonly, nonatomic) struct os_unfair_lock_s discoveryLock; // @synthesize discoveryLock=_discoveryLock;

+ (id)allContentItemClassesInContentKit;
+ (id)sharedRegistry;
- (void).cxx_destruct;
- (Class)contentItemClassForType:(id)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2;
- (id)contentItemClassesSupportingType:(id)arg1;
- (id)init;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)arg1;

@end

