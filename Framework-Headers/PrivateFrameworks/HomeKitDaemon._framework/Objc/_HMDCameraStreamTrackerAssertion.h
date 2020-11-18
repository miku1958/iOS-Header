//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCameraSessionID, HMDCameraStreamTracker;

@interface _HMDCameraStreamTrackerAssertion : NSObject
{
    HMDCameraStreamTracker *_streamTracker;
    HMDCameraSessionID *_streamSessionID;
}

@property (readonly, nonatomic) HMDCameraSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property (readonly, weak, nonatomic) HMDCameraStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;

@end

