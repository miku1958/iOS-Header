//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject
{
    NSXPCConnection *_connection;
}

@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;

+ (void)configureSecuritydXPCProtocol:(id)arg1;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)arg1;

@end

