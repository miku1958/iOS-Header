//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface MPSAccelerationStructureGroup : NSObject
{
    struct MPSBVHGroup *_bvhGroup;
}

@property (readonly, nonatomic) id<MTLDevice> device;

- (struct MPSBVHGroup *)bvhGroup;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 storageMode:(unsigned long long)arg2;

@end
