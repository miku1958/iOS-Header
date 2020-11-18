//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PMLAppleDirectory : NSObject
{
    NSData *_data;
    const struct entry_s *_entries;
    unsigned long long _nentries;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isEmailInAppleDirectory:(id)arg1;
- (BOOL)isEmailInAppleDirectory:(id)arg1 withAnotherEmail:(id)arg2;
- (BOOL)isEmailInAppleDirectory:(id)arg1 withPhonenumber:(id)arg2;
- (BOOL)isPhoneNumberInAppleDirectory:(id)arg1;
- (BOOL)isPhoneNumberInAppleDirectory:(id)arg1 withAnotherPhone:(id)arg2;

@end
