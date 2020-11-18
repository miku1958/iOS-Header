//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PDScheduledActivityCriteria;
@protocol NSObject><NSSecureCoding;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>
{
    PDScheduledActivityCriteria *_activityCriteria;
    id<NSObject><NSSecureCoding> _activityContext;
}

@property (readonly, nonatomic) id<NSObject><NSSecureCoding> activityContext; // @synthesize activityContext=_activityContext;
@property (readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria; // @synthesize activityCriteria=_activityCriteria;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScheduledActivityRegistration:(id)arg1;

@end
