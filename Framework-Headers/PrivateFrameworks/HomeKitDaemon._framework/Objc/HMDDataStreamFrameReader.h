//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (unsigned long long)_getCurrentFrameSize;
- (void)_readFrameHeaderIfPossible;
- (unsigned long long)bytesNeededForCurrentFrame;
- (BOOL)hasCompleteFrame;
- (BOOL)hasFailed;
- (BOOL)hasPartialData;
- (id)init;
- (id)popRawFrame;
- (void)pushFrameData:(id)arg1;
- (void)reset;

@end
