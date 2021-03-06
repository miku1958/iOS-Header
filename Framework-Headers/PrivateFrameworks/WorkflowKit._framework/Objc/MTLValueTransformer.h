//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

#import <WorkflowKit/MTLTransformerErrorHandling-Protocol.h>

@class NSString;

@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling>
{
    CDUnknownBlockType _forwardBlock;
    CDUnknownBlockType _reverseBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CDUnknownBlockType forwardBlock; // @synthesize forwardBlock=_forwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CDUnknownBlockType reverseBlock; // @synthesize reverseBlock=_reverseBlock;
@property (readonly) Class superclass;

+ (BOOL)allowsReverseTransformation;
+ (id)reversibleTransformerWithBlock:(CDUnknownBlockType)arg1;
+ (id)reversibleTransformerWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:(CDUnknownBlockType)arg1;
+ (id)transformerUsingForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
+ (id)transformerUsingReversibleBlock:(CDUnknownBlockType)arg1;
+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)initWithForwardBlock:(CDUnknownBlockType)arg1 reverseBlock:(CDUnknownBlockType)arg2;
- (id)transformedValue:(id)arg1;
- (id)transformedValue:(id)arg1 success:(BOOL *)arg2 error:(id *)arg3;

@end

