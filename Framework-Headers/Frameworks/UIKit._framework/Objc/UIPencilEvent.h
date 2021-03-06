//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface UIPencilEvent : UIEvent
{
    NSHashTable *_trackedInteractions;
}

@property (strong, nonatomic) NSHashTable *trackedInteractions; // @synthesize trackedInteractions=_trackedInteractions;

- (void).cxx_destruct;
- (id)_init;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (long long)subtype;
- (long long)type;

@end

