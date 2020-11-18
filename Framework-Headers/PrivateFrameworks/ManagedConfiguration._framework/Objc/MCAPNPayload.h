//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload
{
    NSArray *_apnInfos;
    BOOL _wasInstalled;
}

@property (nonatomic) BOOL wasInstalled; // @synthesize wasInstalled=_wasInstalled;

+ (id)apnDomainName;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (BOOL)_checkForValidContents:(id)arg1 outError:(id *)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)_strippedAPNDefaults;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;
- (id)apnDefaults;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end

