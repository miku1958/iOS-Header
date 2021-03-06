//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFGenericFileContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)contentCategories;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (BOOL)isContent;

@end

