//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEventDispatcher, NSOperationQueue;

@interface HMDMPCSessionController : HMFObject
{
    NSOperationQueue *_speakerGroupCommandOperationQueue;
    HMDLogEventDispatcher *_logEventDispatcher;
}

@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property (readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue; // @synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue;

- (void).cxx_destruct;
- (void)executeSessionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLogEventDispatcher:(id)arg1;

@end
