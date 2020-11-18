//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSRenderNodeExport-Protocol.h>

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties, NURenderNode;

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>
{
}

@property (readonly) NUJSImageGeometry *geometry;
@property (readonly) NUJSImageProperties *imageProperties;
@property (readonly) NURenderNode *node;
@property (readonly) NUJSVideoProperties *videoProperties;

- (id)initWithNode:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

