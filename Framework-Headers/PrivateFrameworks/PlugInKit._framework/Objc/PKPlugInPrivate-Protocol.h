//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlugInKit/PKPlugIn-Protocol.h>

@class NSDate, NSDictionary, NSUUID, NSXPCConnection;

@protocol PKPlugInPrivate <PKPlugIn>

@property (strong) NSDictionary *environment;
@property (strong) NSDictionary *extensionState;
@property (readonly) NSXPCConnection *pluginConnection;
@property (readonly) NSDate *timestamp;
@property (readonly) NSUUID *uuid;

@end
