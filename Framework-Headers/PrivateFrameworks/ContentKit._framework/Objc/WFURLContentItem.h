//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSURL;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) NSURL *URL;

+ (id)URLCoercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterRepresentationsForAllowedContent:(id)arg1;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)mutableURLCoercions;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (void)registerURLCoercion:(Class)arg1;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (id)additionalRepresentationsForSerialization;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)description;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentationForPrintHandler:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getContentsOfURLWithHandler:(CDUnknownBlockType)arg1;
- (void)getContentsWithRequest:(id)arg1 cacheResult:(BOOL)arg2 expectedByteCountHandler:(CDUnknownBlockType)arg3 writtenByteCountHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getContentsWithRequest:(id)arg1 expectedByteCountHandler:(CDUnknownBlockType)arg2 writtenByteCountHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getHeadersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (void)getTitle:(CDUnknownBlockType)arg1;
- (BOOL)includesFileRepresentationInSerializedItem;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (id)outputTypes;

@end
