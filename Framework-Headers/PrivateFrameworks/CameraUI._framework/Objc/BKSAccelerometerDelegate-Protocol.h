//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class BKSAccelerometer;

@protocol BKSAccelerometerDelegate <NSObject>
- (void)accelerometer:(BKSAccelerometer *)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

@optional
- (void)accelerometer:(BKSAccelerometer *)arg1 didChangeDeviceOrientation:(long long)arg2;
@end

