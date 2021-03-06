//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>
#import <NewsToday/NTSectionDisplayDescriptor-Protocol.h>

@class NSOrderedSet, NSString, NSURL, NTPBSectionDisplayDescriptor, SFRankingFeedback;

@interface NTSection : NSObject <NTSectionDisplayDescriptor, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_personalizationFeatureID;
    NSOrderedSet *_items;
    SFRankingFeedback *_rankingFeedback;
    NSString *_referralBarName;
    NSString *_backingTagID;
    NSString *_actionTitle;
    NSURL *_actionURL;
    NTPBSectionDisplayDescriptor *_displayDescriptor;
}

@property (copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property (copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backingTagID; // @synthesize backingTagID=_backingTagID;
@property (copy, nonatomic) NTPBSectionDisplayDescriptor *displayDescriptor; // @synthesize displayDescriptor=_displayDescriptor;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSOrderedSet *items; // @synthesize items=_items;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property (copy, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property (copy, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;

+ (id)_itemClassesByType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 rankingFeedback:(id)arg6 displayDescriptor:(id)arg7 referralBarName:(id)arg8 backingTagID:(id)arg9;
- (BOOL)isEqual:(id)arg1;

@end

