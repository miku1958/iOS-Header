//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLHarvester : NSObject
{
    NSXPCConnection *_connection;
}

- (void)connect;
- (id)currentStateDictionary;
- (void)dealloc;
- (void)submitSample:(id)arg1;

@end

