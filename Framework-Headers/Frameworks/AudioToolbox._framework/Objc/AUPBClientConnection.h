//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;
@protocol AUPBInspecting;

__attribute__((visibility("hidden")))
@interface AUPBClientConnection : NSObject
{
    NSXPCConnection *xpcconnection;
    id<AUPBInspecting> proxyInterface;
}

@property (strong, nonatomic) id<AUPBInspecting> proxyInterface; // @synthesize proxyInterface;
@property (strong, nonatomic) NSXPCConnection *xpcconnection; // @synthesize xpcconnection;


@end
