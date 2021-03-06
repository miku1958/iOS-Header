//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, SASPresentationServer;

@interface SASPresentationModel : NSObject
{
    SASPresentationServer *_presentationServer;
    long long _requestState;
    NSMutableArray *_enqueuedButtonEventCompletions;
    NSTimer *_pingTimer;
}

@property (strong, nonatomic) NSMutableArray *enqueuedButtonEventCompletions; // @synthesize enqueuedButtonEventCompletions=_enqueuedButtonEventCompletions;
@property (strong, nonatomic) NSTimer *pingTimer; // @synthesize pingTimer=_pingTimer;
@property (readonly, nonatomic) SASPresentationServer *presentationServer; // @synthesize presentationServer=_presentationServer;
@property (nonatomic) long long requestState; // @synthesize requestState=_requestState;

- (void).cxx_destruct;
- (void)flushEnqueuedButtonEventCompletions;
- (id)initWithPresentationServer:(id)arg1;

@end

