//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>
#import <ProactiveML/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol, PMLPlistAndChunksSerializableProtocol>
{
    int _buckets;
    int _ngrams;
    BOOL _normalize;
    BOOL _intercept;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL normalize; // @synthesize normalize=_normalize;
@property (readonly) Class superclass;

+ (id)withBucketSize:(int)arg1;
+ (id)withBucketSize:(int)arg1 andNgrams:(int)arg2;
+ (id)withBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(BOOL)arg3;
- (id)init;
- (id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(BOOL)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
