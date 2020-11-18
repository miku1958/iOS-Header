//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderer.h>

@protocol MTLDevice;

@interface NUMetalRenderer : NURenderer
{
    id<MTLDevice> _device;
}

- (void).cxx_destruct;
- (id)initWithCIContext:(id)arg1;
- (id)initWithMetalDevice:(id)arg1 options:(id)arg2;
- (id)name;

@end

