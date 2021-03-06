//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSData, NSString;

@interface TRIPBAny : TRIPBMessage
{
}

@property (copy, nonatomic) NSString *typeURL; // @dynamic typeURL;
@property (copy, nonatomic) NSData *value; // @dynamic value;

+ (id)anyWithMessage:(id)arg1 error:(id *)arg2;
+ (id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
+ (id)descriptor;
- (id)initWithMessage:(id)arg1 error:(id *)arg2;
- (id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (BOOL)packWithMessage:(id)arg1 error:(id *)arg2;
- (BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id *)arg3;
- (id)unpackMessageClass:(Class)arg1 error:(id *)arg2;

@end

