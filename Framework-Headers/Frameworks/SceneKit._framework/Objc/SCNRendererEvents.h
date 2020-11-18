//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLEvent;

@interface SCNRendererEvents : NSObject
{
    id<MTLEvent> _waitEvent;
    unsigned long long _waitFrame;
    id<MTLEvent> _signalEvent;
    unsigned long long _signalFrame;
}

@property (strong, nonatomic) id<MTLEvent> signalEvent; // @synthesize signalEvent=_signalEvent;
@property (nonatomic) unsigned long long signalFrame; // @synthesize signalFrame=_signalFrame;
@property (strong, nonatomic) id<MTLEvent> waitEvent; // @synthesize waitEvent=_waitEvent;
@property (nonatomic) unsigned long long waitFrame; // @synthesize waitFrame=_waitFrame;

- (void)dealloc;
- (void)signalAfterSubmittingRender:(id)arg1;
- (void)waitBeforeSubmittingRender:(id)arg1;

@end
