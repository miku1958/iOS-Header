//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTPendingPlan : CTPlan
{
    NSString *_smdpURL;
    NSString *_matchingID;
}

@property (readonly, nonatomic) NSString *matchingID; // @synthesize matchingID=_matchingID;
@property (readonly, nonatomic) NSString *smdpURL; // @synthesize smdpURL=_smdpURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmdpURL:(id)arg1 matchingID:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
