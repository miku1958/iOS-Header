//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoRetimerDelegate-Protocol.h>

@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate>
{
    CDUnknownBlockType _retimerDidRetimeSampleBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType retimerDidRetimeSampleBuffer; // @synthesize retimerDidRetimeSampleBuffer=_retimerDidRetimeSampleBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)retimer:(id)arg1 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;

@end

