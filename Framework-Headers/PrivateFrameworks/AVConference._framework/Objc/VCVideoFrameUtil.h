//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoFrameUtil : NSObject
{
}

+ (CDStruct_1b6d18a9)CMTimeFromXPCDictionary:(id)arg1;
+ (struct __CVBuffer *)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(BOOL)arg2;
+ (id)newXPCDictionaryWithCVPixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3;

@end
