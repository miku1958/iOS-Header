//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponent.h>

#import <Silex/SXQuickLookComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXFormattedText, SXJSONArray, SXJSONDictionary;
@protocol SXComponentAnchor;

@interface SXQuickLookComponent : SXComponent <SXQuickLookComponent>
{
}

@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, nonatomic) id<SXComponentAnchor> anchor;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) SXFormattedText *caption; // @dynamic caption;
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXComponentConditions *conditions;
@property (readonly, nonatomic) unsigned long long contentRelevance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fileExtension; // @dynamic fileExtension;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) NSString *resourceIdentifier; // @dynamic resourceIdentifier;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) NSString *style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) NSString *type;

+ (id)typeString;
- (id)captionWithValue:(id)arg1 withType:(int)arg2;

@end

