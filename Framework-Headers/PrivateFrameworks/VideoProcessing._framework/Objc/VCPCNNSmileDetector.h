//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNSmileDetector : NSObject
{
}

+ (id)detector;
- (int)computeSmileScore:(float *)arg1;
- (int)detectSmileForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 smile:(BOOL *)arg3;
- (float *)getInputBuffer;

@end
