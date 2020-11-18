//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class NSString, SXComponentAnchor, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;

@interface SXComponent : SXJSONObject
{
    SXComponentAnimation *backingAnimation;
    SXComponentClassification *_classification;
}

@property (readonly, nonatomic) SXJSONArray *additions; // @dynamic additions;
@property (readonly, nonatomic) SXJSONDictionary *analytics; // @dynamic analytics;
@property (readonly, nonatomic) SXComponentAnchor *anchor; // @dynamic anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation; // @dynamic animation;
@property (strong, nonatomic) SXComponentAnimation *backingAnimation; // @synthesize backingAnimation;
@property (readonly, nonatomic) SXJSONArray *behaviors; // @dynamic behaviors;
@property (readonly, nonatomic) SXComponentClassification *classification; // @synthesize classification=_classification;
@property (readonly, nonatomic) SXComponentConditions *conditions; // @dynamic conditions;
@property (readonly, nonatomic) unsigned long long contentRelevance; // @dynamic contentRelevance;
@property (readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property (readonly, nonatomic) NSString *layout; // @dynamic layout;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style; // @dynamic style;
@property (readonly, nonatomic) NSString *type; // @dynamic type;

+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
- (void).cxx_destruct;
- (id)animationWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2;
- (id)description;

@end

