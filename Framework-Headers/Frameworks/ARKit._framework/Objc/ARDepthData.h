//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARDepthData : NSObject
{
    struct __CVBuffer *_depthMap;
    struct __CVBuffer *_confidenceMap;
}

@property (readonly, nonatomic) struct __CVBuffer *confidenceMap; // @synthesize confidenceMap=_confidenceMap;
@property (readonly, nonatomic) struct __CVBuffer *depthMap; // @synthesize depthMap=_depthMap;

- (id)initWithDepthMap:(struct __CVBuffer *)arg1 confidenceMap:(struct __CVBuffer *)arg2;

@end
