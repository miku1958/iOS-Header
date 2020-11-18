//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_networkServiceTypePerConfig;
    long long _expectedSendSize;
    long long _expectedReceiveSize;
}

@property (nonatomic) long long expectedReceiveSize; // @synthesize expectedReceiveSize=_expectedReceiveSize;
@property (nonatomic) long long expectedSendSize; // @synthesize expectedSendSize=_expectedSendSize;
@property (strong, nonatomic) NSDictionary *networkServiceTypePerConfig; // @synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
