//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject
{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDInteractionStore *_interactionStore;
}

@property (readonly, weak, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleted;
- (id)initWithInteractionStore:(id)arg1;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)recorded:(id)arg1;

@end
