//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding>
{
    unsigned long long _estimatedMemoryImpact;
    NSString *_caarFilePath;
}

@property (copy, nonatomic) NSString *caarFilePath; // @synthesize caarFilePath=_caarFilePath;
@property (nonatomic) unsigned long long estimatedMemoryImpact; // @synthesize estimatedMemoryImpact=_estimatedMemoryImpact;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
