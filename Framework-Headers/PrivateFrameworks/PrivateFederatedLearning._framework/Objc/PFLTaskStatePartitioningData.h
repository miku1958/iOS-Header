//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSURL;

@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState>
{
    NSURL *_compiledModelURL;
}

@property (readonly, nonatomic) NSURL *compiledModelURL; // @synthesize compiledModelURL=_compiledModelURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledModelURL:(id)arg1;
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
