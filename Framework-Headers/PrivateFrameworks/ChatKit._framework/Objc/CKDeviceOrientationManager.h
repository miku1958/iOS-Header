//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/BKSAccelerometerDelegate-Protocol.h>

@class BKSAccelerometer, NSMutableSet, NSString;
@protocol CKDeviceOrientationManagerDelegate;

__attribute__((visibility("hidden")))
@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate>
{
    id<CKDeviceOrientationManagerDelegate> _delegate;
    BKSAccelerometer *_accelerometer;
    NSMutableSet *_listenerKeys;
}

@property (strong, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property (readonly, nonatomic) long long currentDeviceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKDeviceOrientationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableSet *listenerKeys; // @synthesize listenerKeys=_listenerKeys;
@property (readonly, nonatomic, getter=isListeningForOrientationEvents) BOOL listeningForOrientationEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_broadcastOrientation:(long long)arg1;
- (long long)_springboardDeviceLockOrientation;
- (void)_updateListeningState;
- (BOOL)_wantsOrientationEvents;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)beginListeningForOrientationEventsWithKey:(id)arg1;
- (void)dealloc;
- (void)endListeningForOrientationEventsWithKey:(id)arg1;
- (id)init;
- (void)invalidate;

@end
