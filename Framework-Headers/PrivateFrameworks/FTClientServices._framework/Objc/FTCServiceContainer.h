//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property (readonly, strong, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property (strong, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;

- (BOOL)addListenerID:(id)arg1;
- (void)dealloc;
- (BOOL)hasListenerID:(id)arg1;
- (id)initWithServiceType:(long long)arg1;
- (BOOL)removeListenerID:(id)arg1;

@end
