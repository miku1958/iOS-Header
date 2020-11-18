//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNVCardDateComponentsFormatter, NSCalendar;

@interface CNVCardDateComponentsParser : NSObject
{
    CNVCardDateComponentsFormatter *_formatter;
    NSCalendar *_gregorianCalendar;
}

- (id)dateComponentsFromString:(id)arg1 calendarIdentifier:(id)arg2;
- (id)dateComponentsFromString:(id)arg1 omitYear:(long long)arg2;
- (id)dateComponentsWithParser:(id)arg1;
- (void)dealloc;
- (id)gregorianDateComponentsWithParser:(id)arg1;
- (id)init;

@end

