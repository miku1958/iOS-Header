//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListener;

@interface BMStreamsAccessClient : NSObject
{
    NSXPCListener *_listener;
    long long _readExtensionHandle;
    long long _writeExtensionHandle;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasAccessForStream:(long long)arg1 permission:(const char *)arg2;
- (BOOL)hasReadAccessForStream:(long long)arg1;
- (BOOL)hasWriteAccessForStream:(long long)arg1;
- (BOOL)requestReadAccessTokenForStream:(long long)arg1;
- (BOOL)requestWriteAccessTokenForStream:(long long)arg1;

@end

