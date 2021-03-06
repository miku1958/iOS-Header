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
    unsigned long long _maxDistance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxDistance; // @synthesize maxDistance=_maxDistance;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *targetString; // @synthesize targetString=_targetString;

+ (BOOL)debugAppendText:(id)arg1;
+ (void)debugSetContext:(id)arg1;
+ (void)debugStoreContext;
+ (id)transformArray:(id)arg1 withTargetIndex:(unsigned long long)arg2 maximumDistance:(unsigned long long)arg3;
+ (id)withTarget:(id)arg1 maxDistance:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTarget:(id)arg1 maxDistance:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTokenDistanceMappingTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end

