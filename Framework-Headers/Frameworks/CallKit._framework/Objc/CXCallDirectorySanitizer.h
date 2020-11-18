//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject
{
    NSCharacterSet *_phoneNumbersCharacterSet;
    NSCharacterSet *_nonPhoneNumbersCharacterSet;
    NSCharacterSet *_phoneNumbersIgnoredCharacterSet;
}

@property (readonly, nonatomic) NSCharacterSet *nonPhoneNumbersCharacterSet; // @synthesize nonPhoneNumbersCharacterSet=_nonPhoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersCharacterSet; // @synthesize phoneNumbersCharacterSet=_phoneNumbersCharacterSet;
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersIgnoredCharacterSet; // @synthesize phoneNumbersIgnoredCharacterSet=_phoneNumbersIgnoredCharacterSet;

- (void).cxx_destruct;
- (id)canonicalizedPhoneNumber:(id)arg1;
- (id)init;

@end

