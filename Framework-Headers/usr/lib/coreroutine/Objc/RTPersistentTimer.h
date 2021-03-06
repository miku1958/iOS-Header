//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface RTPersistentTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    double _interval;
    NSDate *_fireDate;
    NSString *_serviceIdentifier;
    CDUnknownBlockType _handler;
}

@property (strong, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (nonatomic) double interval; // @synthesize interval=_interval;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)_setupNextTimer;
- (void)_startTimer;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 serviceIdentifier:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)invalidate;

@end

