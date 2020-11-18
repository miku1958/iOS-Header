//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/ASDRequestClient-Protocol.h>

@class NSString, NSXPCConnection;

@interface ASDRequest : ASDBaseClient <ASDRequestClient>
{
    NSXPCConnection *_connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (void)_startRequestType:(unsigned long long)arg1 withOptions:(id)arg2;
- (void)dealloc;
- (void)requestCompletedWithResponse:(id)arg1 error:(id)arg2;

@end

