//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/AXHAXPCClient.h>

@interface AXHAFakeXPCClient : AXHAXPCClient
{
    CDUnknownBlockType _updateBlock;
}

- (void)dealloc;
- (void)registerMessageBlock:(CDUnknownBlockType)arg1;
- (BOOL)sendMessage:(id)arg1 withError:(id *)arg2;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1;

@end

