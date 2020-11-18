//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

@class MNNavigationServiceLocalProxy, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationServicePeer : GEONavdPeer
{
    MNNavigationServiceLocalProxy *_proxy;
    NSString *_peerIdentifier;
    int _processIdentifier;
}

@property (readonly, nonatomic) NSString *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property (readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property (readonly, nonatomic) MNNavigationServiceLocalProxy *proxy; // @synthesize proxy=_proxy;

- (void).cxx_destruct;
- (void)clearConnectionHandlers;
- (void)dealloc;
- (id)initWithServiceInterfaceProxy:(id)arg1 connection:(id)arg2 peerIdentifier:(id)arg3 processIdentifier:(int)arg4;

@end

