//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CBCentral, CBPeer, CBScalablePipeManager, NSInputStream, NSOutputStream, NSString;

@interface CBScalablePipe : NSObject
{
    CBScalablePipeManager *_pipeManager;
    int _socket;
    CBCentral *_central;
    CBPeer *_peer;
    NSString *_name;
    long long _type;
    long long _priority;
    NSInputStream *_input;
    NSOutputStream *_output;
}

@property (readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
@property (readonly, nonatomic) NSInputStream *input; // @synthesize input=_input;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSOutputStream *output; // @synthesize output=_output;
@property (readonly, nonatomic) CBPeer *peer; // @synthesize peer=_peer;
@property (readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void)dealloc;
- (id)description;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;
- (void)setOrphan;

@end

