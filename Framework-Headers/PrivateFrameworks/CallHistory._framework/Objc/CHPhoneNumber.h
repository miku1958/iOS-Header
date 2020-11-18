//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger
{
    BOOL _formatted;
    NSString *_originalPhoneNumber;
    NSString *_ISOCountryCode;
    NSString *_formattedPhoneNumber;
}

@property (copy) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property BOOL formatted; // @synthesize formatted=_formatted;
@property (copy) NSString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
@property (copy) NSString *originalPhoneNumber; // @synthesize originalPhoneNumber=_originalPhoneNumber;

- (void).cxx_destruct;
- (id)formattedNumber;
- (id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2;

@end
