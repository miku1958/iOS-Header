//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIRemoteApplication : NSObject
{
    NSString *_machServiceName;
    unsigned int _port;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didTakeScreenshot;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2;
- (void)updatePort;
- (void)wakeTimerFired;

@end

