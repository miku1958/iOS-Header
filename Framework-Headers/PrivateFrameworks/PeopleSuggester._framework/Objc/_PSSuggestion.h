//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSDictionary, NSNumber, NSString;

@interface _PSSuggestion : NSObject <NSSecureCoding>
{
    BOOL _familySuggestion;
    BOOL _isAdaptedModelCreated;
    BOOL _isAdaptedModelUsed;
    NSString *_conversationIdentifier;
    NSString *_groupName;
    NSArray *_recipients;
    NSString *_bundleID;
    INImage *_image;
    NSString *_derivedIntentIdentifier;
    NSNumber *_score;
    NSString *_adaptedModelRecipeID;
    NSString *_supportedBundleIDs;
    NSDictionary *_modelSuggestionProxies;
    NSString *_reason;
    NSString *_reasonType;
    NSString *_trialID;
}

@property (strong, nonatomic) NSString *adaptedModelRecipeID; // @synthesize adaptedModelRecipeID=_adaptedModelRecipeID;
@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property (readonly, copy, nonatomic) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property (readonly, nonatomic) BOOL familySuggestion; // @synthesize familySuggestion=_familySuggestion;
@property (readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (readonly, nonatomic) INImage *image; // @synthesize image=_image;
@property (nonatomic) BOOL isAdaptedModelCreated; // @synthesize isAdaptedModelCreated=_isAdaptedModelCreated;
@property (nonatomic) BOOL isAdaptedModelUsed; // @synthesize isAdaptedModelUsed=_isAdaptedModelUsed;
@property (strong, nonatomic) NSDictionary *modelSuggestionProxies; // @synthesize modelSuggestionProxies=_modelSuggestionProxies;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (copy, nonatomic) NSString *reasonType; // @synthesize reasonType=_reasonType;
@property (copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property (readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property (strong, nonatomic) NSString *supportedBundleIDs; // @synthesize supportedBundleIDs=_supportedBundleIDs;
@property (copy, nonatomic) NSString *trialID; // @synthesize trialID=_trialID;

+ (id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 familySuggestion:(BOOL)arg10;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 score:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end
