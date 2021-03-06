//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSArray, NSExtensionItem;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>
{
    NSArray *_extensionSubItems;
}

@property (readonly, nonatomic) NSExtensionItem *extensionItem;
@property (strong, nonatomic) NSArray *extensionSubItems; // @synthesize extensionSubItems=_extensionSubItems;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithObject:(id)arg1 sourceAppBundleIdentifier:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (void).cxx_destruct;
- (BOOL)cachesSupportedTypes;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)coerceToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)extensionItemName;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)itemProviderItems;
- (id)itemProviders;
- (BOOL)itemProvidersSupportType:(id)arg1;
- (id)name;
- (void)preloadImportantItemsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

