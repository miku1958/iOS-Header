//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNFlattenBlock : VCPCNNBlock
{
    int _chunk;
}

- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)forward;
- (id)initWithParameters:(int)arg1;

@end
