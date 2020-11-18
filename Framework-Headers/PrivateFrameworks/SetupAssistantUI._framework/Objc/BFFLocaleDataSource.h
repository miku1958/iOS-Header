//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BFFLocaleDataSource : NSObject
{
    NSString *_language;
    NSMutableArray *_suggestedCountries;
    NSMutableArray *_moreCountries;
}

@property (copy, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSMutableArray *moreCountries; // @synthesize moreCountries=_moreCountries;
@property (strong, nonatomic) NSMutableArray *suggestedCountries; // @synthesize suggestedCountries=_suggestedCountries;

+ (id)newWithLanguage:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)numberOfOtherLocales;
- (unsigned long long)numberOfRecommendedLocales;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;
- (void)reloadData;

@end

