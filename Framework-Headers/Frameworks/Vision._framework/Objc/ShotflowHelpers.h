//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShotflowHelpers : NSObject
{
}

+ (shared_ptr_6300bc2c)getCGImageAsVImageBuffer:(struct CGImage *)arg1;
+ (shared_ptr_34708d24)getCGImageFromCIImage:(id)arg1;
+ (id)resizeImage:(id)arg1 byX:(float)arg2 andY:(float)arg3;
+ (id)resizeImage:(id)arg1 to:(struct CGSize)arg2;
+ (id)resizeImage:(id)arg1 toWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;
+ (id)setCIContext:(id)arg1;

@end

