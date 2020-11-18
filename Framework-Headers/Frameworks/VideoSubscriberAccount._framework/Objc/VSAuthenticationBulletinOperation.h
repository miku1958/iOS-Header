//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSAuthenticationBulletinOperation : VSAsyncOperation
{
    NSURL *_appStoreRoomURL;
    NSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)executionDidBegin;
- (id)init;
- (id)initWithAppStoreRoomURL:(id)arg1;

@end

