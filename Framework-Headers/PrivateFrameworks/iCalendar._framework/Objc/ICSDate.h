//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty
{
}

@property (strong, nonatomic) NSString *tzid;

- (id)components;
- (id)description;
- (BOOL)hasFloatingTimeZone;
- (BOOL)hasTimeComponent;
- (id)initWithValue:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;

@end

