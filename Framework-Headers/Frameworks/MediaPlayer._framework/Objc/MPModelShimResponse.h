//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse
{
    MPModelResponse *_modelResponse;
}

@property (strong, nonatomic) MPModelResponse *modelResponse; // @synthesize modelResponse=_modelResponse;

+ (id)builderProtocol;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

@end
