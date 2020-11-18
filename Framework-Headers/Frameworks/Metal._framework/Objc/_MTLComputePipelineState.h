//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject
{
    NSString *_label;
    id<MTLDevice> _device;
}

@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly) NSString *label; // @synthesize label=_label;

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

@end

