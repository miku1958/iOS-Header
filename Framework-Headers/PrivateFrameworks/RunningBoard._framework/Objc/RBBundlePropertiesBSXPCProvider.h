//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RBBundlePropertiesBSXPCProvider : NSObject
{
    NSMutableDictionary *_propertiesByIdentifier;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)propertiesForIdentifier:(id)arg1;
- (void)removePropertiesForIdentifier:(id)arg1;

@end
