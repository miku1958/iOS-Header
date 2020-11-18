//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDictionary;

@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDictionary *_mappings;
}

@property (strong) NSDictionary *mappings; // @synthesize mappings=_mappings;

+ (id)withMappings:(id)arg1;
- (void).cxx_destruct;
- (id)initWithMappings:(id)arg1;
- (id)transform:(id)arg1;

@end
