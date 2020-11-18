//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_transformers;
}

@property (strong) NSArray *transformers; // @synthesize transformers=_transformers;

+ (id)withTransformers:(id)arg1;
- (void).cxx_destruct;
- (id)initWithTransformers:(id)arg1;
- (id)transform:(id)arg1;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;

@end

