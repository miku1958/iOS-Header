//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLObjectContainerComponent-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent>
{
    NSMutableArray *_objects;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSArray *objects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;

@end

