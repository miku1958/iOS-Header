//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ImageProcessing_CoreImageUtils : NSObject
{
}

+ (struct CGImage *)newCGImageFromCIImage:(id)arg1 error:(id *)arg2;
+ (id)newCIImageFromVImage:(struct vImage_Buffer *)arg1 withType:(int)arg2 error:(id *)arg3;
+ (struct vImage_Buffer)newVImageBufferFromCIImage:(id)arg1 error:(id *)arg2;

@end

