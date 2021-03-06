//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RecapPerformanceTesting/RPTBlockBasedScrollTestParameters-Protocol.h>
#import <RecapPerformanceTesting/RPTScrollTestParameters-Protocol.h>

@class NSArray, NSString, RCPSyntheticEventStream;

@interface RPTGroupScrollTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters>
{
    NSString *testName;
    CDUnknownBlockType _completionHandler;
    NSArray *_parameters;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // @synthesize testName;

+ (id)newWithTestName:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (CDUnknownBlockType)composerBlock;

@end

