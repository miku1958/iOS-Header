//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKViewVolume : NSObject
{
    struct VKPoint _corners[8];
}

@property (readonly, nonatomic) const struct VKPoint *corners;

- (id).cxx_construct;
- (struct VKPoint)lerpPoint:(float *)arg1;
- (void)updateWithFrustum:(CDStruct_184b3e93)arg1 matrix:(const CDStruct_aa5aacbc *)arg2;

@end

