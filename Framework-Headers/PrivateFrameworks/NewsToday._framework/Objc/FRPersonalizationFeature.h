//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSString;

@interface FRPersonalizationFeature : NSObject <NSCopying>
{
    NSString *_personalizationIdentifier;
    NSString *_tagID;
}

@property (readonly, nonatomic) NSString *fr_description;
@property (strong, nonatomic) NSString *personalizationIdentifier; // @synthesize personalizationIdentifier=_personalizationIdentifier;
@property (strong, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;

+ (CDUnknownBlockType)concatFeatureGenerator:(CDUnknownBlockType)arg1 withGenerator:(CDUnknownBlockType)arg2;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(BOOL)arg2;
+ (id)featureFromTagID:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForGroupType:(long long)arg1;
+ (CDUnknownBlockType)featureGeneratorForHeadline:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForHeadline:(id)arg1 groupType:(long long)arg2;
+ (CDUnknownBlockType)featureGeneratorForTag:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForTagID:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForVideoWithPublisher:(id)arg1;
+ (id)featureObserver;
+ (id)featuresFromHeadline:(id)arg1;
+ (id)featuresFromPersonalizingArticle:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
