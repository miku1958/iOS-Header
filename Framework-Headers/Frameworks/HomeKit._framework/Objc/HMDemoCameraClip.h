//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraClip.h>

@class NSURL;

@interface HMDemoCameraClip : HMCameraClip
{
    NSURL *_clipURL;
}

@property (readonly, copy) NSURL *clipURL; // @synthesize clipURL=_clipURL;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5;
- (id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4;

@end

