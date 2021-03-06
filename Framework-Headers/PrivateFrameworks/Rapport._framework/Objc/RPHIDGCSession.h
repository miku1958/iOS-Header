//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPHIDGCSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_options;
    id<RPMessageable> _messenger;
}

@property (strong, nonatomic) id<RPMessageable> messenger; // @synthesize messenger=_messenger;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;
- (void)invalidate;
- (void)sendGCEvent:(struct RPHIDGCEvent *)arg1 destinationID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

