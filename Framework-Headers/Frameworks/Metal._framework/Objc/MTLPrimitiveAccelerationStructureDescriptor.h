//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAccelerationStructureDescriptor.h>

@class NSArray;

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor
{
    NSArray *_geometryDescriptors;
}

@property (strong, nonatomic) NSArray *geometryDescriptors; // @synthesize geometryDescriptors=_geometryDescriptors;

+ (id)descriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
