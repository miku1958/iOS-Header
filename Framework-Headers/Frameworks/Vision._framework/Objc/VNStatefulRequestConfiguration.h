//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration
{
    NSUUID *_requestUUID;
    CDStruct_1b6d18a9 _frameAnalysisSpacing;
}

@property CDStruct_1b6d18a9 frameAnalysisSpacing; // @synthesize frameAnalysisSpacing=_frameAnalysisSpacing;
@property (readonly) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end
