//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class CIImage, CIRenderDestination, CIRenderTask;

@protocol NURenderer <NSObject>
- (CIRenderTask *)renderImage:(CIImage *)arg1 toDestination:(CIRenderDestination *)arg2 bounds:(CDStruct_996ac03c)arg3 error:(out id *)arg4;
@end

