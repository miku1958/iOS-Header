//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIContact : NSObject
{
    BOOL _hasRelevancyScore;
    float _relevancyScore;
    NSString *_familyName;
    NSString *_phoneticFamilyName;
    NSString *_givenName;
    NSString *_phoneticGivenName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSArray *_relations;
    NSArray *_cities;
}

@property (strong, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property (strong, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (strong, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (nonatomic) BOOL hasRelevancyScore; // @synthesize hasRelevancyScore=_hasRelevancyScore;
@property (strong, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property (strong, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (strong, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property (strong, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property (strong, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property (strong, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property (strong, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property (strong, nonatomic) NSArray *relations; // @synthesize relations=_relations;
@property (nonatomic) float relevancyScore; // @synthesize relevancyScore=_relevancyScore;

- (void).cxx_destruct;
- (id)flatten;

@end
