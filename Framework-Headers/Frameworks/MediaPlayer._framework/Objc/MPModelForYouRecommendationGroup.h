//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPSectionedCollection, NSArray, NSDate, NSString, NSURL;

@interface MPModelForYouRecommendationGroup : MPModelObject
{
    NSURL *_refreshURL;
    BOOL _groupRecommendation;
}

@property (nonatomic) BOOL displaysAsGridCellInCarPlay; // @dynamic displaysAsGridCellInCarPlay;
@property (nonatomic, getter=isGroupRecommendation) BOOL groupRecommendation; // @synthesize groupRecommendation=_groupRecommendation;
@property (nonatomic) unsigned long long groupType; // @dynamic groupType;
@property (strong, nonatomic) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL; // @dynamic loadAdditionalContentURL;
@property (copy, nonatomic) NSURL *refreshURL; // @dynamic refreshURL;
@property (nonatomic) long long sectionIndex; // @dynamic sectionIndex;
@property (strong, nonatomic) MPSectionedCollection *sectionedItems; // @dynamic sectionedItems;
@property (copy, nonatomic) NSArray *subgroups; // @dynamic subgroups;
@property (copy, nonatomic) NSString *title; // @dynamic title;

+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__groupType_KEY;
+ (id)__lastUpdatedDate_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__refreshURL_KEY;
+ (id)__sectionIndex_KEY;
+ (id)__sectionedItems_KEY;
+ (id)__subgroups_KEY;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
- (void).cxx_destruct;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end
