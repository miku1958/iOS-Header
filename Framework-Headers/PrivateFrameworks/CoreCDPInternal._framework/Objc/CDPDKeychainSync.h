//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDKeychainSync : NSObject
{
}

+ (id)_defaultUserVisibleViewSet;
+ (BOOL)_hasNonViewAwarePeers;
+ (BOOL)isUserVisibleKeychainSyncEnabled;
+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
