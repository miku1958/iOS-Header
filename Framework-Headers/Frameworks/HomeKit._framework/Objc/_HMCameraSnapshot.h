//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource
{
    NSDate *_captureDate;
}

@property (readonly, copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;

- (void).cxx_destruct;
- (void)_releaseSlotIdentifier;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 captureDate:(id)arg8;

@end

