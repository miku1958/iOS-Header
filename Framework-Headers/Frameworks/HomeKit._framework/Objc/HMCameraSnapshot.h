//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraSource.h>

@class NSDate, _HMCameraSnapshot;

@interface HMCameraSnapshot : HMCameraSource
{
    _HMCameraSnapshot *_snapshot;
}

@property (readonly, copy, nonatomic) NSDate *captureDate;
@property (strong, nonatomic) _HMCameraSnapshot *snapshot; // @synthesize snapshot=_snapshot;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)arg1;

@end

