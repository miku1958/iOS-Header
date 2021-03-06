//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IOKPowerNotifierDelegate;

@interface IOKPowerNotifier : NSObject
{
    struct IONotificationPort *_notificationPort;
    unsigned int _connection;
    unsigned int _notifier;
    id<IOKPowerNotifierDelegate> _delegate;
}

@property (weak, nonatomic) id<IOKPowerNotifierDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)arg1 andArgument:(long long)arg2;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (void)systemHasPoweredOn;
- (void)systemWillNotSleep;
- (void)systemWillPowerOn;
- (void)systemWillSleep;

@end

