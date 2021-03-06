//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLTaskState-Protocol.h>

@class NSError;

@interface PFLTaskStateError : NSObject <PFLTaskState>
{
    NSError *_error;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (void)resume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end

