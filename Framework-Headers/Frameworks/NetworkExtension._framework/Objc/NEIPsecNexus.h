//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEInternetNexus.h>

@class NSArray;

@interface NEIPsecNexus : NEInternetNexus
{
    NSArray *_nexusInstances;
}

@property (strong, nonatomic) NSArray *nexusInstances; // @synthesize nexusInstances=_nexusInstances;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3;
- (id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned int)arg3 netifRingSize:(unsigned int)arg4 kernelPipeTxRingSize:(unsigned int)arg5 kernelPipeRxRingSize:(unsigned int)arg6;
- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(BOOL)arg3;
- (BOOL)setDefaultInputHandler:(struct nw_protocol *)arg1;
- (void)setRemotePacketProxy:(id)arg1;

@end
