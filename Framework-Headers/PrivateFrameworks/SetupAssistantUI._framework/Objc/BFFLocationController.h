//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface BFFLocationController : NSObject
{
    NSString *_guessedCountryFromTelephony;
    NSArray *_guessedCountries;
    NSDictionary *_aliasDict;
    NSSet *_validCountries;
    BOOL _fakeMode;
    NSArray *_firstGuessedLanguages;
}

@property (nonatomic) BOOL fakeMode; // @synthesize fakeMode=_fakeMode;
@property (strong, nonatomic) NSArray *firstGuessedLanguages; // @synthesize firstGuessedLanguages=_firstGuessedLanguages;
@property (strong, nonatomic) NSArray *guessedCountries; // @synthesize guessedCountries=_guessedCountries;

+ (id)sharedBuddyLocationController;
- (void).cxx_destruct;
- (id)_checkForAliases:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkedArrayForString:(id)arg1;
- (void)_closeWifiConnection;
- (id)_countriesFromDefaults;
- (id)_countryFromTelephony;
- (void)_scanComplete:(id)arg1 error:(BOOL)arg2;
- (void)_setGuessedCountryDefault:(id)arg1;
- (void)_startWifiScan;
- (id)aliasDict;
- (void)dealloc;
- (BOOL)getCountryFromTelephony;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (id)init;
- (void)reset;

@end

