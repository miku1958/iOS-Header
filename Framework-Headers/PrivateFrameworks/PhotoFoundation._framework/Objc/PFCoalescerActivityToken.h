//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PFCoalescerActivityToken : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSString *_reason;
    NSArray *_callStackReturnAddresses;
    NSDate *_creationDate;
}

@property (strong) NSArray *callStackReturnAddresses; // @synthesize callStackReturnAddresses=_callStackReturnAddresses;
@property (strong) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property (strong) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property (strong) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)endActivity;
- (id)initWithDispatchGroup:(id)arg1 reason:(id)arg2;

@end
