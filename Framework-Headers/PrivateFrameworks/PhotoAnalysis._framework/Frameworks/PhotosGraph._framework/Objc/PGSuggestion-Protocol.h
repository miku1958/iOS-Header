//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@protocol PGSuggestion <NSObject>

@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSSet *features;
@property (readonly, nonatomic) NSArray *keyAssets;
@property (readonly, nonatomic) unsigned char notificationQuality;
@property (readonly, nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) id recipe;
@property (readonly, nonatomic) unsigned long long relevanceDurationInDays;
@property (readonly, nonatomic) NSArray *representativeAssets;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, copy, nonatomic) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) long long version;

@end

