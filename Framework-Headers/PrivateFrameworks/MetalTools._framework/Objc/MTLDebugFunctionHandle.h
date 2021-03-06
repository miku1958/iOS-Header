//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsFunctionHandle.h>

#import <MetalTools/MTLFunctionHandle-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandle>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

@end

