//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>
{
    long long _taskType;
    long long _retryCount;
}

@property (nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property (nonatomic) long long taskType; // @synthesize taskType=_taskType;

+ (BOOL)supportsSecureCoding;
+ (id)taskWithType:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

