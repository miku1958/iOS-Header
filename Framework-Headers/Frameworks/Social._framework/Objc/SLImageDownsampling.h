//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLImageDownsampling : NSObject
{
}

+ (id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2;
+ (id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2;
+ (void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
+ (void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(CDUnknownBlockType)arg3;
+ (CDStruct_912cb5d2)imageSizeWithData:(id)arg1;

@end

