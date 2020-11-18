//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVNLP/CVNLPCaptionModelBase.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase
{
    unsigned long long _modelIndex;
    void *_decoderPlan;
    void *_decoderCtx;
    NSObject<OS_dispatch_queue> *_decoderQueue;
    CVNLPCaptionDecoderBlock *_nextBlock;
    NSString *_metricString;
    NSString *_metricCopyString;
    CDStruct_2bc666a5 _decoderNet;
    CDStruct_0a65202a _attFeatsPlaceholderBlob;
    CDStruct_0a65202a _blockInput;
    CDStruct_0a65202a _blockOutput;
}

@property (nonatomic) CDStruct_0a65202a attFeatsPlaceholderBlob; // @synthesize attFeatsPlaceholderBlob=_attFeatsPlaceholderBlob;
@property (nonatomic) CDStruct_0a65202a blockInput; // @synthesize blockInput=_blockInput;
@property (nonatomic) CDStruct_0a65202a blockOutput; // @synthesize blockOutput=_blockOutput;
@property (nonatomic) void *decoderCtx; // @synthesize decoderCtx=_decoderCtx;
@property (nonatomic) CDStruct_2bc666a5 decoderNet; // @synthesize decoderNet=_decoderNet;
@property (nonatomic) void *decoderPlan; // @synthesize decoderPlan=_decoderPlan;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // @synthesize decoderQueue=_decoderQueue;
@property (strong, nonatomic) NSString *metricCopyString; // @synthesize metricCopyString=_metricCopyString;
@property (strong, nonatomic) NSString *metricString; // @synthesize metricString=_metricString;
@property (nonatomic) unsigned long long modelIndex; // @synthesize modelIndex=_modelIndex;
@property (strong, nonatomic) CVNLPCaptionDecoderBlock *nextBlock; // @synthesize nextBlock=_nextBlock;

- (void).cxx_destruct;
- (BOOL)_loadNetwork:(id)arg1 modelIndex:(unsigned long long)arg2;
- (void)_runBlockWithCopyOutputBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 modelIndex:(unsigned long long)arg2 runTimeParams:(id)arg3;
- (void)runBlockWithCopyInput:(float *)arg1 copyOutputBlock:(CDUnknownBlockType)arg2;
- (void)runBlockWithCopyInputBlock:(CDUnknownBlockType)arg1 copyOutputBlock:(CDUnknownBlockType)arg2;

@end
