//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString, _DKKnowledgeStorage;
@protocol OS_xpc_object;

@protocol _DKStandingQuery

@property (strong, nonatomic) NSObject<OS_xpc_object> *activity;
@property (strong, nonatomic) NSString *queryIdentifier;

- (void)executeWithStorage:(_DKKnowledgeStorage *)arg1;
- (NSObject *)fetchResult;
@end

