//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface AXDragEndpointClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (BOOL)isValidServiceName:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getDragEndpoint:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1;

@end

