//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MusicStoreBrowseResponse, NSString, NSURL;

@interface MusicStoreBrowseSection : MPModelObject
{
    BOOL _memberOfChartSet;
    BOOL _brick;
    NSString *_title;
    long long _sectionType;
    NSURL *_loadAdditionalContentURL;
    long long _uniformContentItemType;
    MusicStoreBrowseResponse *_previouslyRetrievedNestedResponse;
}

@property (nonatomic, getter=isBrick) BOOL brick; // @synthesize brick=_brick;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
@property (nonatomic, getter=isMemberOfChartSet) BOOL memberOfChartSet; // @synthesize memberOfChartSet=_memberOfChartSet;
@property (strong, nonatomic) MusicStoreBrowseResponse *previouslyRetrievedNestedResponse; // @synthesize previouslyRetrievedNestedResponse=_previouslyRetrievedNestedResponse;
@property (nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long uniformContentItemType; // @synthesize uniformContentItemType=_uniformContentItemType;

+ (id)__MusicStoreBrowseSectionPropertyBrick__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyLoadAdditionalContentURL__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyMemberOfChartSet__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyPreviouslyRetrievedNestedResponse__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyTitle__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyType__PROPERTY;
+ (id)__MusicStoreBrowseSectionPropertyUniformContentItemType__PROPERTY;
+ (id)__brick__KEY;
+ (id)__loadAdditionalContentURL__KEY;
+ (id)__memberOfChartSet__KEY;
+ (id)__previouslyRetrievedNestedResponse__KEY;
+ (id)__sectionType__KEY;
+ (id)__title__KEY;
+ (id)__uniformContentItemType__KEY;
- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

