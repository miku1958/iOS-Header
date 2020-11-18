//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding>
{
    NSDate *_date;
    NSString *_flightQuery;
    NSString *_appBundleId;
}

@property (copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (copy, nonatomic) NSString *flightQuery; // @synthesize flightQuery=_flightQuery;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;
- (Class)responseClass;

@end

