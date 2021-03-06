//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSString;
@protocol PMLTransformerProtocol;

@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol>
{
    id<PMLTransformerProtocol> _transformer;
    NSString *_inputKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSString *inputKey; // @synthesize inputKey=_inputKey;
@property (readonly) Class superclass;
@property (strong) id<PMLTransformerProtocol> transformer; // @synthesize transformer=_transformer;

+ (id)withTransformer:(id)arg1 appliedToInputKey:(id)arg2;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTransformer:(id)arg1 appliedToInputKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSGSelectiveTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end

