//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol RBClientInheritanceManagerDelegate;

@interface RBClientInheritanceManager : NSObject
{
    NSMutableSet *_inheritances;
    NSMutableSet *_queuedGainedInheritances;
    NSMutableSet *_queuedLostInheritances;
    BOOL _awaitingAck;
    struct os_unfair_lock_s _lock;
    id<RBClientInheritanceManagerDelegate> _delegate;
}

@property (readonly, weak, nonatomic) id<RBClientInheritanceManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithInheritances:(id)arg1 delegate:(id)arg2;
- (void)setInheritances:(id)arg1;

@end
