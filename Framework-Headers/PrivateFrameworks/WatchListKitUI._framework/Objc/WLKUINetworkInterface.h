//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUINetworkInterface-Protocol.h>

@interface WLKUINetworkInterface : IKJSObject <WLKUINetworkInterface>
{
    BOOL _suppressServerConfigNotifications;
}

- (void)_fireInitConfigCallbackWithUUID:(id)arg1;
- (void)_handleAppLibChange:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)fetchConfiguration:(BOOL)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateConfiguration;
- (id)makeRequest:(id)arg1:(id)arg2;

@end

