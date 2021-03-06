//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelFlowUDP.h>

@class NSPDNSPacket;

@interface NPTunnelFlowDNS : NPTunnelFlowUDP
{
    BOOL _telemetryReported;
    NSPDNSPacket *_query;
    long long _tunnelResult;
    NSPDNSPacket *_tunnelDNSResponse;
    long long _directResult;
    NSPDNSPacket *_directDNSResponse;
    void *_tunnelResponseTimer;
}

@property (strong) NSPDNSPacket *directDNSResponse; // @synthesize directDNSResponse=_directDNSResponse;
@property long long directResult; // @synthesize directResult=_directResult;
@property (strong) NSPDNSPacket *query; // @synthesize query=_query;
@property BOOL telemetryReported; // @synthesize telemetryReported=_telemetryReported;
@property (strong) NSPDNSPacket *tunnelDNSResponse; // @synthesize tunnelDNSResponse=_tunnelDNSResponse;
@property void *tunnelResponseTimer; // @synthesize tunnelResponseTimer=_tunnelResponseTimer;
@property long long tunnelResult; // @synthesize tunnelResult=_tunnelResult;

- (void).cxx_destruct;
- (id)addDNSInfoToTelemetry:(id)arg1;
- (BOOL)checkAndReportTelemetry;
- (void)cleanupLosingConnection:(BOOL)arg1;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
- (id)createStateDictionaryWithResult:(long long)arg1 response:(id)arg2;
- (void)handleAppData:(id)arg1;
- (void)handleTunnelConnected;
- (id)resultToString:(long long)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;

@end

