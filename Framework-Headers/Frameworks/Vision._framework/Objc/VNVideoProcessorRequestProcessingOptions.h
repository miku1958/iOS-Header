//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@class VNVideoProcessorCadence;

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying>
{
    VNVideoProcessorCadence *_cadence;
}

@property (copy) VNVideoProcessorCadence *cadence; // @synthesize cadence=_cadence;

- (void).cxx_destruct;
- (id)_createVCPVideoProcessorRequestConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

