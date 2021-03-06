//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface WFStorageServiceRegistry : NSObject
{
    NSArray *_registeredServices;
}

@property (readonly, nonatomic) NSSet *objectRepresentationClasses;
@property (readonly, nonatomic) NSArray *registeredServices; // @synthesize registeredServices=_registeredServices;
@property (readonly, nonatomic) NSArray *storageServices;

+ (void)registerAllActionKitStorageServiceClasses;
+ (void)registerStorageServiceClass:(Class)arg1;
+ (id)sharedRegistry;
- (void).cxx_destruct;
- (id)init;
- (id)storageServiceWithName:(id)arg1;

@end

