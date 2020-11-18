//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEFilterPacketContext, NEFilterPacketProvider, NSUUID;
@protocol OS_nw_interface;

@interface NEFilterPacketInterpose : NSObject
{
    struct os_unfair_lock_s _lock;
    struct channel *_channel;
    struct channel_attr *_attributes;
    int _channel_fd;
    unsigned short _slot_size;
    struct __slot_desc *_rx_last_slot;
    struct interpose_frame _frame_buffer;
    struct interpose_frame *_current_frame;
    struct channel_ring_desc *_rx_ring_ingress;
    struct channel_ring_desc *_tx_ring_ingress;
    struct channel_ring_desc *_rx_ring_egress;
    struct channel_ring_desc *_tx_ring_egress;
    NEFilterPacketProvider *_provider;
    NSObject<OS_nw_interface> *_interface;
    NEFilterPacketContext *_context;
    BOOL _input_suspended;
    unsigned int _nexusPort;
    unsigned int _keyLength;
    NSUUID *_flowId;
    NSUUID *_nexusInstance;
    void *_key;
    void *_input_source;
}

@property (strong) NSUUID *flowId; // @synthesize flowId=_flowId;
@property void *input_source; // @synthesize input_source=_input_source;
@property BOOL input_suspended; // @synthesize input_suspended=_input_suspended;
@property void *key; // @synthesize key=_key;
@property unsigned int keyLength; // @synthesize keyLength=_keyLength;
@property (strong) NSUUID *nexusInstance; // @synthesize nexusInstance=_nexusInstance;
@property unsigned int nexusPort; // @synthesize nexusPort=_nexusPort;

- (void).cxx_destruct;
- (struct interpose_frame *)allocateFrame:(struct interpose_frame *)arg1;
- (void)allowPacket:(id)arg1;
- (void)close;
- (void)close:(BOOL)arg1;
- (BOOL)createChannel;
- (void)dealloc;
- (void)deallocateFrame:(struct interpose_frame *)arg1;
- (id)delayCurrentPacket;
- (id)description;
- (void)freePacket:(id)arg1;
- (id)initWithInterface:(id)arg1 flowId:(unsigned char [16])arg2 nexusInstance:(unsigned char [16])arg3 nexusPort:(unsigned int)arg4 key:(void *)arg5 keyLength:(unsigned int)arg6 provider:(id)arg7;
- (BOOL)matchFlow:(unsigned char [16])arg1 flowId:(unsigned char [16])arg2;

@end
