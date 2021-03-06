//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBInCallPresentationSceneUpdateContext : NSObject
{
    NSString *_analyticsSource;
    long long _executionTarget;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postSceneUpdateHandler;
    CDUnknownBlockType _transitionRequestBuilderBlock;
    CDUnknownBlockType _validatorHandler;
    struct CGRect _referenceFrame;
}

@property (copy, nonatomic) NSString *analyticsSource; // @synthesize analyticsSource=_analyticsSource;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) long long executionTarget; // @synthesize executionTarget=_executionTarget;
@property (copy, nonatomic) CDUnknownBlockType postSceneUpdateHandler; // @synthesize postSceneUpdateHandler=_postSceneUpdateHandler;
@property (nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property (copy, nonatomic) CDUnknownBlockType transitionRequestBuilderBlock; // @synthesize transitionRequestBuilderBlock=_transitionRequestBuilderBlock;
@property (copy, nonatomic) CDUnknownBlockType validatorHandler; // @synthesize validatorHandler=_validatorHandler;

- (void).cxx_destruct;
- (id)initWithReferenceFrame:(struct CGRect)arg1 analyticsSource:(id)arg2 transitionRequestBuilderBlock:(CDUnknownBlockType)arg3;

@end

