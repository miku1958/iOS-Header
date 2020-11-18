//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;

@interface NUFaceDetectionRequest : NURenderRequest
{
    long long _maxFaceCount;
    id<NUScalePolicy> _scalePolicy;
}

@property long long maxFaceCount; // @synthesize maxFaceCount=_maxFaceCount;
@property (strong) id<NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submit:(CDUnknownBlockType)arg1;

@end
