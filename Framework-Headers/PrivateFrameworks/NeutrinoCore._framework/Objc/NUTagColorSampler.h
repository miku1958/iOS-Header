//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUColorSampler.h>

@class NSString;

@interface NUTagColorSampler : NUColorSampler
{
    NSString *_tag;
}

@property (readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;

- (void).cxx_destruct;
- (id)_pipelineFilters;
- (id)initWithComposition:(id)arg1 tag:(id)arg2;
- (id)initWithComposition:(id)arg1 tag:(id)arg2 responseQueue:(id)arg3;

@end
