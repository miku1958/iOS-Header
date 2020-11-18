//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/WLKBulletinClient-Protocol.h>
#import <WatchListKit/WLKNotificationsImpl-Protocol.h>

@class NSString, NSXPCConnection;
@protocol WLKNotificationCenterDelegate;

@interface WLKNotificationsImpl_iOS : NSObject <WLKBulletinClient, WLKNotificationsImpl>
{
    id<WLKNotificationCenterDelegate> delegate;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_JSONDictForResponse:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (void)receivedBulletinResponse:(id)arg1;

@end

