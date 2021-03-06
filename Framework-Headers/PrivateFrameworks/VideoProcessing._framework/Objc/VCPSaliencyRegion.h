//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPSaliencyRegion : NSObject
{
    float _confidence;
    struct CGRect _bound;
}

@property struct CGRect bound; // @synthesize bound=_bound;
@property float confidence; // @synthesize confidence=_confidence;

+ (void)attachSalientRegions:(id)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
+ (id)salientRegionsFromPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWith:(struct CGRect)arg1 confidence:(float)arg2;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)plistRepresentation;

@end

