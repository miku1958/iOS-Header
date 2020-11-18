//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSDate, NSDateFormatter, NSString;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText
{
    NSDateFormatter *_displayDateFormatter;
    BOOL _showsDay;
    BOOL _showsMonth;
    BOOL _showsYear;
    NSString *_submissionFormat;
}

@property (copy, nonatomic) NSDate *currentValue; // @dynamic currentValue;
@property (readonly, copy, nonatomic) NSDate *defaultDate;
@property (nonatomic) BOOL showsDay; // @synthesize showsDay=_showsDay;
@property (nonatomic) BOOL showsMonth; // @synthesize showsMonth=_showsMonth;
@property (nonatomic) BOOL showsYear; // @synthesize showsYear=_showsYear;
@property (copy, nonatomic) NSString *submissionFormat; // @synthesize submissionFormat=_submissionFormat;

- (void).cxx_destruct;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)_locale;
- (id)displayString;
- (unsigned long long)fieldType;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end

