//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoHelpers : NSObject
{
}

+ (id)_locateFrameworkBundleForResourceWithName:(id)arg1 resourceDirectory:(id *)arg2 error:(id *)arg3;
+ (struct __CVBuffer *)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const CDStruct_cf098810 *)arg2 error:(id *)arg3;
+ (BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 espressoResources:(id *)arg6 error:(id *)arg7;
+ (BOOL)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(BOOL)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 explicitNetworkLayersStorageType:(int)arg6 espressoResources:(id *)arg7 error:(id *)arg8;
+ (BOOL)enableMontrealAndReturnError:(id *)arg1;
+ (BOOL)feedForwardEspressoBufferForNetwork:(CDStruct_2bc666a5 *)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(BOOL)arg4 error:(id *)arg5;
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id *)arg2;
+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id *)arg2;
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const CDStruct_cf098810 *)arg1 error:(id *)arg2;
+ (BOOL)renderEspressoBufferImage:(const CDStruct_cf098810 *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;

@end
