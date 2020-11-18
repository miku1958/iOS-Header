//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPCNNBlock, VCPCNNData, VCPCNNMetalContext;

@interface VCPCNNModel : NSObject
{
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
    VCPCNNData *_output;
}

@property (readonly) VCPCNNData *output; // @synthesize output=_output;

- (void).cxx_destruct;
- (int)add:(id)arg1;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)forward:(id)arg1;
- (id)getGPUContext;
- (id)init;
- (id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2;
- (int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2;
- (int)size;

@end
