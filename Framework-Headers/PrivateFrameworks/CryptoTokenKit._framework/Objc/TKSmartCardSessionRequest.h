//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject
{
    NSDictionary *_parameters;
    CDUnknownBlockType _reply;
    NSXPCConnection *_connection;
}

@property (weak) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (copy) CDUnknownBlockType reply; // @synthesize reply=_reply;

- (void).cxx_destruct;

@end

