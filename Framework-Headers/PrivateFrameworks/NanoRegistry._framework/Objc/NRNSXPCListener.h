//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCListener.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>
#import <NanoRegistry/NSXPCListenerDelegate-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol>
{
    id<NRNSXPCListenerDelegate> _listenerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<NRNSXPCListenerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

