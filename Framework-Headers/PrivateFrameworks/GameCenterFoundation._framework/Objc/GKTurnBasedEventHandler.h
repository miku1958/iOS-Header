//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

@interface GKTurnBasedEventHandler : NSObject
{
    BOOL _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegateWeak;
    NSObject<OS_dispatch_queue> *_lookForEventQueue;
}

@property (nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
@property (nonatomic) BOOL didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
@property (nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue; // @synthesize lookForEventQueue=_lookForEventQueue;

+ (id)sharedTurnBasedEventHandler;
- (void)callTurnEventForMatch:(id)arg1 userTapped:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (void)lookForEvent;

@end

