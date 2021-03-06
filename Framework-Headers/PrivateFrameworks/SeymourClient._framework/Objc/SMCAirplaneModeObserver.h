//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SeymourClient/RadiosPreferencesDelegate-Protocol.h>

@class RadiosPreferences;
@protocol OS_dispatch_queue, SMCAirplaneModeObserverDelegate;

@interface SMCAirplaneModeObserver : NSObject <RadiosPreferencesDelegate>
{
    id<SMCAirplaneModeObserverDelegate> _delegate;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<SMCAirplaneModeObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (BOOL)enabled;
- (id)initWithQueue:(id)arg1;

@end

