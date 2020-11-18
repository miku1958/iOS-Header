//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventCollector : NSObject
{
    id<HDWorkoutEventCollectorDelegate> _delegate;
    NSUUID *_sessionId;
}

@property (readonly, weak) id<HDWorkoutEventCollectorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) NSUUID *sessionId; // @synthesize sessionId=_sessionId;

+ (BOOL)isAvailableInCurrentHardware;
- (void).cxx_destruct;
- (void)immediateUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (BOOL)supportsWorkoutActivityType:(unsigned long long)arg1;

@end

