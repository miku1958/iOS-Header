//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject
{
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}

@property (readonly) CDStruct_1b6d18a9 timestamp;

- (id)_initWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)adjustedTimestamp;
- (void)dealloc;
- (BOOL)hasCorrespondingDepthData;
- (void)setAdjustedTimestamp:(CDStruct_1b6d18a9)arg1;

@end

