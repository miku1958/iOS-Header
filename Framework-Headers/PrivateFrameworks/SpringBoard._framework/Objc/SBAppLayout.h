//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding>
{
    long long _cachedAppLayoutType;
    BOOL _hidden;
    long long _configuration;
    long long _environment;
    NSDictionary *_rolesToLayoutItemsMap;
}

@property (nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (copy, nonatomic) NSDictionary *rolesToLayoutItemsMap; // @synthesize rolesToLayoutItemsMap=_rolesToLayoutItemsMap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type;

+ (id)appLayoutWithProtobufRepresentation:(id)arg1;
+ (id)homeScreenAppLayout;
- (void).cxx_destruct;
- (id)allItems;
- (id)appLayoutByModifyingHiddenState:(BOOL)arg1;
- (id)appLayoutWithItemsPassingTest:(CDUnknownBlockType)arg1;
- (long long)compare:(id)arg1;
- (BOOL)containsAnyItemFromSet:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (BOOL)containsItemWithBundleIdentifier:(id)arg1;
- (BOOL)containsItemWithUniqueIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (unsigned long long)frameOptions;
- (id)init;
- (id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3;
- (id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 hidden:(BOOL)arg4;
- (id)initWithPlistRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemForLayoutRole:(long long)arg1;
- (long long)layoutRoleForItem:(id)arg1;
- (id)plistRepresentation;
- (id)protobufRepresentation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
