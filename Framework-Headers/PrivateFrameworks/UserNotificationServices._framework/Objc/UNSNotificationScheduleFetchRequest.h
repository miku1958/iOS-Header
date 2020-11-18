//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotificationServices/NSSecureCoding-Protocol.h>

@class NSDate;

@interface UNSNotificationScheduleFetchRequest : NSObject <NSSecureCoding>
{
    BOOL _includeSnoozes;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _maxSize;
}

@property (strong) NSDate *endDate; // @synthesize endDate=_endDate;
@property BOOL includeSnoozes; // @synthesize includeSnoozes=_includeSnoozes;
@property unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

