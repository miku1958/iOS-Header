//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;
@protocol OS_dispatch_queue, SGQPSettingsObserver;

@interface SGQPSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<SGQPSettingsObserver> _observer;
    NSUserDefaults *_defaults;
    NSString *_abGroup;
}

@property (readonly) NSString *abGroup; // @synthesize abGroup=_abGroup;

- (void).cxx_destruct;
- (void)_registerNotification;
- (void)_reloadSettingsFromDefaultsAndNotifyObserver;
- (id)init;
- (void)setObserver:(id)arg1;

@end

