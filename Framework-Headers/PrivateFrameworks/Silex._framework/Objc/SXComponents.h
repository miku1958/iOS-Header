//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>
#import <Silex/NSFastEnumeration-Protocol.h>
#import <Silex/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    NSMutableArray *_components;
    NSMutableDictionary *_componentsByIdentifier;
    NSMutableDictionary *_childComponentsByParentIdentifier;
}

@property (readonly, nonatomic) NSArray *allComponents;
@property (readonly, nonatomic) NSMutableDictionary *childComponentsByParentIdentifier; // @synthesize childComponentsByParentIdentifier=_childComponentsByParentIdentifier;
@property (readonly, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property (readonly, nonatomic) NSMutableDictionary *componentsByIdentifier; // @synthesize componentsByIdentifier=_componentsByIdentifier;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (void)_removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)addComponentsFromArray:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateComponentsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertComponent:(id)arg1 afterComponent:(id)arg2;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)removeAllComponents;
- (void)removeComponentAtIndex:(unsigned long long)arg1;
- (void)removeComponentWithIdentifier:(id)arg1;
- (void)replaceComponent:(id)arg1 withComponent:(id)arg2;
- (void)replaceComponentAtIndex:(unsigned long long)arg1 withComponent:(id)arg2;
- (void)setComponents:(id)arg1;

@end

