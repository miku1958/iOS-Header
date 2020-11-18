//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TransparencyTranscript : NSObject
{
    NSString *_context;
    NSMutableArray *_events;
}

@property (strong) NSString *context; // @synthesize context=_context;
@property (strong) NSMutableArray *events; // @synthesize events=_events;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)serialize;
- (void)startEvent:(id)arg1;
- (void)stopEventWithFailure:(id)arg1 error:(id)arg2;
- (void)stopEventWithSuccess:(id)arg1;

@end
