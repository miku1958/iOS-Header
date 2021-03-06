//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject
{
    NSMutableSet *_objectsFromPhone;
    NSMutableSet *_objectsFromWatch;
    NSMutableDictionary *_objectsFromPhoneApps;
    NSMutableDictionary *_objectUUIDToAssocatedObjectUUIDs;
}

- (void).cxx_destruct;
- (void)addObjectFromPhone:(id)arg1;
- (void)addObjectFromWatch:(id)arg1;
- (void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2;
- (void)addObjectsFromPhone:(id)arg1;
- (void)addObjectsFromWatch:(id)arg1;
- (void)enumerateObjectAssociations:(CDUnknownBlockType)arg1;
- (id)init;
- (id)objectsFromPhone;
- (id)objectsFromPhoneApps;
- (id)objectsFromWatch;
- (void)setAssociatedObjectUUIDs:(id)arg1 forObjectUUID:(id)arg2;

@end

