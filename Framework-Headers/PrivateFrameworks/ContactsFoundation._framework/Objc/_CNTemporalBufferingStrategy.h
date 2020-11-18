//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/_CNBufferingStrategy-Protocol.h>

@class NSString;
@protocol CNCancelable, CNScheduler;

__attribute__((visibility("hidden")))
@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy>
{
    double _interval;
    id<CNScheduler> _scheduler;
    id<CNCancelable> _sendToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) id<CNCancelable> sendToken; // @synthesize sendToken=_sendToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2;

@end

