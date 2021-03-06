//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSDictionary, NSString, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion
{
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    PHPerson *_person;
    NSString *_contactIdentifier;
}

@property (readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, nonatomic) PHPerson *person; // @synthesize person=_person;

+ (id)questionForPerson:(id)arg1;
- (void).cxx_destruct;
- (id)_additionalInfoFromContactIdentifier:(id)arg1;
- (id)_personForContactSuggestion;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithConfirmedPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;
- (id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;
- (void)legacyPersist;
- (void)legacyRemove;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(id)arg1;
- (void)remove;
- (unsigned short)state;
- (unsigned short)type;

@end

