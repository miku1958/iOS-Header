//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RBPersonaManager : NSObject
{
    long long _personalID;
    NSMutableDictionary *_cachedPersonaIdentifiers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)_fetchData;
- (id)init;
- (long long)personaIDForManagedPersona:(id)arg1;

@end
