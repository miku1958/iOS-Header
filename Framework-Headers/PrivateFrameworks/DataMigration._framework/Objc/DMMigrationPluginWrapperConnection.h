//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataMigration/DMXPCConnection.h>

@interface DMMigrationPluginWrapperConnection : DMXPCConnection
{
}

+ (id)connection;
- (void)handleMessage:(id)arg1;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
