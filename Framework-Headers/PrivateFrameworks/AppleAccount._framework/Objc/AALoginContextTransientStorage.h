//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface AALoginContextTransientStorage : NSObject
{
    BOOL _hasBeenCleared;
    NSLock *_clearLock;
}

+ (id)sharedStorage;
- (void).cxx_destruct;
- (void)_deleteKeychainItemForUsername:(id)arg1 service:(id)arg2;
- (id)_keychainItemForUsername:(id)arg1 service:(id)arg2;
- (id)_readNonsensitiveParameters;
- (void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (void)_saveNonsensitiveParameters:(id)arg1;
- (void)clear;
- (id)init;
- (void)save:(id)arg1;
- (id)storedContext;

@end

