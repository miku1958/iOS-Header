//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVAirTransport, AVBonjourService, NSDictionary;

@protocol AVBonjourServiceDelegate <NSObject>
- (void)bonjourService:(AVBonjourService *)arg1 didAcceptConnectionChannel:(AVAirTransport *)arg2;
- (void)bonjourService:(AVBonjourService *)arg1 didCloseChannel:(AVAirTransport *)arg2;

@optional
- (NSDictionary *)bonjourServiceAdditionalTXTRecordInfo:(AVBonjourService *)arg1;
@end
