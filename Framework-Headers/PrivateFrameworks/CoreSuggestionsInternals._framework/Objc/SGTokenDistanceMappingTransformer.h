//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGTokenDistanceMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_targetString;
}

@property (strong) NSString *targetString; // @synthesize targetString=_targetString;

+ (id)withTarget:(id)arg1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;
- (id)transform:(id)arg1;

@end

