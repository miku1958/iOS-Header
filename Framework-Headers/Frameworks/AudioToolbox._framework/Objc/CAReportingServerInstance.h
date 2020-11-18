//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AudioToolbox/CAReportingServerInterface-Protocol.h>

@class CAReportingServer, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CAReportingServerInstance : NSObject <CAReportingServerInterface>
{
    int _clientID;
    CAReportingServer *_master;
    NSMutableDictionary *_clientReportingSessionMap;
}

@property int clientID; // @synthesize clientID=_clientID;
@property (strong) NSMutableDictionary *clientReportingSessionMap; // @synthesize clientReportingSessionMap=_clientReportingSessionMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) CAReportingServer *master; // @synthesize master=_master;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createReportingSession:(long long)arg1;
- (void)destroyReportingSession:(long long)arg1;
- (void)getAllReporters:(CDUnknownBlockType)arg1;
- (void)getServiceNameForReporterID:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleConnectionError;
- (id)initWithMasterAndID:(id)arg1 clientID:(int)arg2 outError:(id *)arg3;
- (void)postAWDMetric:(unsigned int)arg1 withData:(id)arg2;
- (void)postSimpleAWDMetric:(unsigned int)arg1;
- (void)reporterID:(long long)arg1 valid:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 withCategory:(unsigned short)arg2 andType:(unsigned short)arg3 forReportingIDs:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)startReportingSessionForID:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;

@end
