//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class CLPlacemark, NSArray, NSDate, NSString;

@interface PPTripPart : NSObject <NSSecureCoding>
{
    unsigned char _tripMode;
    NSArray *_eventIdentifiers;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_startLocation;
    NSString *_endLocation;
    CLPlacemark *_mainLocation;
    NSString *_fallbackLocationString;
}

@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSString *endLocation; // @synthesize endLocation=_endLocation;
@property (readonly, nonatomic) NSArray *eventIdentifiers; // @synthesize eventIdentifiers=_eventIdentifiers;
@property (strong, nonatomic) NSString *fallbackLocationString; // @synthesize fallbackLocationString=_fallbackLocationString;
@property (strong, nonatomic) CLPlacemark *mainLocation; // @synthesize mainLocation=_mainLocation;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) NSString *startLocation; // @synthesize startLocation=_startLocation;
@property (readonly, nonatomic) unsigned char tripMode; // @synthesize tripMode=_tripMode;

+ (id)descriptionForTripMode:(unsigned char)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)destinationString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventIdentifiers:(id)arg3 mode:(unsigned char)arg4 location:(id)arg5 fallbackLocationString:(id)arg6;

@end
