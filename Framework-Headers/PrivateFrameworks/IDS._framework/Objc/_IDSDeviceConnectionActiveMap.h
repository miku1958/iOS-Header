//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject
{
    NSMutableDictionary *_activeConnectionMap;
    struct os_unfair_lock_s _writeLock;
}

+ (id)sharedInstance;
- (void)dealloc;
- (BOOL)hasActiveConnection:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)removeActiveConnection:(id)arg1 forKey:(id)arg2;
- (void)setActiveConnection:(id)arg1 forKey:(id)arg2;

@end
