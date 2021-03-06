//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceContainerNode.h>

@class NSArray;

@interface NUMultipleSourceContainerNode : NUSourceContainerNode
{
    NSArray *_sources;
}

@property (strong) NSArray *sources; // @synthesize sources=_sources;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithSourceNodes:(id)arg1 assetIdentifier:(id)arg2;
- (id)primarySourceNode;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;

@end

