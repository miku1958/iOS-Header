//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload
{
    NSArray *_whitelistDestinations;
    NSArray *_destinationsWithPasswords;
    NSArray *_titlesAndDescriptions;
}

@property (strong, nonatomic) NSArray *destinationsWithPasswords; // @synthesize destinationsWithPasswords=_destinationsWithPasswords;
@property (strong, nonatomic) NSArray *titlesAndDescriptions; // @synthesize titlesAndDescriptions=_titlesAndDescriptions;
@property (strong, nonatomic) NSArray *whitelistDestinations; // @synthesize whitelistDestinations=_whitelistDestinations;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end

