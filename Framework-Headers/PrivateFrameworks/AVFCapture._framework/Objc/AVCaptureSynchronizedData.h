//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject
{
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}

@property (readonly) CDStruct_1b6d18a9 timestamp;

+ (void)initialize;
- (id)_initWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)adjustedTimestamp;
- (int)constituentDeviceCaptureID;
- (void)dealloc;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;
- (void)setAdjustedTimestamp:(CDStruct_1b6d18a9)arg1;

@end
