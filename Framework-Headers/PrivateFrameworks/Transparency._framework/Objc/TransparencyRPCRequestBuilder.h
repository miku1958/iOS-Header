//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TransparencyRPCRequestBuilder : NSObject
{
}

+ (id)buildConsistencyProofRequest:(id)arg1 revisions:(id)arg2 error:(id *)arg3;
+ (id)buildPublicKeysRequest:(id)arg1 error:(id *)arg2;
+ (id)buildQueryRequest:(id)arg1 accountID:(id)arg2 loggableDatas:(id)arg3 application:(id)arg4 error:(id *)arg5;
+ (id)buildRevisionLogInclusionProofRequest:(id)arg1 logType:(int)arg2 revisions:(id)arg3 error:(id *)arg4;

@end
