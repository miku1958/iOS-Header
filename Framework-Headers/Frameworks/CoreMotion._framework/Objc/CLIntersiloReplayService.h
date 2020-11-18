//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLIntersiloService.h>

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class NSMapTable, NSString;
@protocol CLIntersiloReplayServiceClientProtocol;

@interface CLIntersiloReplayService : CLIntersiloService <CLIntersiloServiceProtocol>
{
    struct unique_ptr<CMMsl::Reader, std::__1::default_delete<CMMsl::Reader>> _replayReader;
    struct Item _onDeckMessage;
    NSMapTable *_outboundTable;
    id<CLIntersiloReplayServiceClientProtocol> _coordinator;
    CDUnknownFunctionPointerType _filter;
}

@property (strong, nonatomic) id<CLIntersiloReplayServiceClientProtocol> coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CDUnknownFunctionPointerType filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *outboundTable; // @synthesize outboundTable=_outboundTable;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginService;
- (void)endService;
- (id)getConnectionKeyFrom:(id)arg1 to:(id)arg2;
- (BOOL)handleAbstractInvocation:(id)arg1 selectorInfo:(id)arg2 selfProxy:(id)arg3 senderProxy:(id)arg4;
- (id)init;
- (BOOL)loadNextRecordedMessageOnDeck;
- (void)tryToSendOnDeckMessage;
- (void)useRecordingFileForPlayback:(id)arg1;
- (void)useRecordingFileForPlayback:(id)arg1 coordinator:(byref id)arg2 synchronousFilter:(CDUnknownFunctionPointerType)arg3;

@end
