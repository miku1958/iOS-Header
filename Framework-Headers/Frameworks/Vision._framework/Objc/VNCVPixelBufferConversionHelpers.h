//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNCVPixelBufferConversionHelpers : NSObject
{
}

+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct __CVBuffer *)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (BOOL)isCVPixelBuffer:(struct __CVBuffer *)arg1 equalToCVPixelBuffer:(struct __CVBuffer *)arg2;

@end

