//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class WFContact;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) WFContact *contact;

+ (id)cachedContactGroups;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)defaultSourceForRepresentation:(id)arg1;
+ (BOOL)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)changeTransaction;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)objectRepresentationsFromLabeledValues:(id)arg1;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)arg1;

@end

