//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SFAnalyticsActivityTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    Class _clientClass;
    unsigned long long _start;
    BOOL _canceled;
    NSNumber *_measurement;
}

@property (strong) NSNumber *measurement; // @synthesize measurement=_measurement;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientClass:(Class)arg2;
- (void)performAction:(CDUnknownBlockType)arg1;
- (void)start;
- (void)stop;
- (void)stopWithEvent:(id)arg1 result:(id)arg2;

@end

