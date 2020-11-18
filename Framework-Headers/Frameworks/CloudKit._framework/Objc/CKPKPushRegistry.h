//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/PKPushRegistryDelegate-Protocol.h>

@class NSHashTable, NSString, PKPushRegistry;

__attribute__((visibility("hidden")))
@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate>
{
    NSHashTable *_delegates;
    PKPushRegistry *_pushRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPushRegistry *pushRegistry; // @synthesize pushRegistry=_pushRegistry;
@property (readonly) Class superclass;

+ (id)sharedPushRegistry;
- (void).cxx_destruct;
- (id)_init;
- (void)addDelegate:(id)arg1;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)removeDelegate:(id)arg1;

@end
