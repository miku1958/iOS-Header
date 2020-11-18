//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface STSetupClient : NSObject
{
    NSXPCConnection *_connection;
}

@property (readonly) NSXPCConnection *connection; // @synthesize connection=_connection;

+ (id)_newConnection;
- (void).cxx_destruct;
- (BOOL)applyUpdatedConfiguration:(id)arg1 error:(id *)arg2;
- (id)currentConfigurationForUser:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)passcodeCollectedFromUserWithError:(id *)arg1;

@end
