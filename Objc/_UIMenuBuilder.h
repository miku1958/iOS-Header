//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIMenuBuilder-Protocol.h>

@class NSArray, UIMenuSystem;

__attribute__((visibility("hidden")))
@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder>
{
    CDStruct_de35aa0b _analysis;
    NSArray *_keyCommandsCache;
    UIMenuSystem *_system;
    unsigned long long __changeCount;
    unsigned long long __actualChangeCount;
}

@property (readonly, nonatomic) unsigned long long _actualChangeCount; // @synthesize _actualChangeCount=__actualChangeCount;
@property (readonly, nonatomic) unsigned long long _changeCount; // @synthesize _changeCount=__changeCount;
@property (readonly, nonatomic) NSArray *_keyCommands;
@property (weak, nonatomic) UIMenuSystem *system; // @synthesize system=_system;

- (void).cxx_destruct;
- (id)_firstValidMenuWithinIdentifiers:(id)arg1;
- (void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(CDUnknownBlockType)arg3;
- (id)_internalDiffForDiffv1:(id)arg1;
- (BOOL)_isInternallyConsistent;
- (id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2;
- (void)_patch:(id)arg1;
- (void)_patchInternalDiff:(id)arg1;
- (void)_recacheCommandsIfNeeded;
- (void)_replaceMenu:(id)arg1 withMenu:(id)arg2;
- (void)_setNeedsRecacheCommands;
- (id)actionForIdentifier:(id)arg1;
- (id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootMenu:(id)arg1;
- (id)initWithSystem:(id)arg1 analysis:(CDStruct_de35aa0b)arg2;
- (void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;
- (void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
- (void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
- (void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
- (id)menuForIdentifier:(id)arg1;
- (void)removeMenuForIdentifier:(id)arg1;
- (void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(CDUnknownBlockType)arg2;
- (void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;

@end

