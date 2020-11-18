//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCDatagramChannelIDS.h>

@class VCEmulatedNetwork;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS
{
    long long _mode;
    VCDatagramChannelIDS *_idsChannel;
    VCEmulatedNetwork *_network;
    struct tagVCMemoryPool *_datagramMetaDataPool;
    int _packetCount;
    BOOL _isStarted;
}

- (id)connectedLinks;
- (void)dealloc;
- (id)defaultLink;
- (id)destination;
- (id)initWithIDSDatagramChannel:(id)arg1 mode:(long long)arg2;
- (void)invalidate;
- (void)optInStreamIDs:(id)arg1;
- (void)optOutStreamIDs:(id)arg1;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)setWiFiAssist:(BOOL)arg1;
- (void)setupEmulatedNetwork;
- (int)start;
- (unsigned int)token;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)writeToEmulatedNetworkWithDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4;

@end
