//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/NSSecureCoding-Protocol.h>

@class CLLocation;

@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding>
{
    CLLocation *Home;
    CLLocation *Work;
    CLLocation *School;
    CLLocation *Gym;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
