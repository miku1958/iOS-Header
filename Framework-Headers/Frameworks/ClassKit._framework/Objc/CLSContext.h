//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class CLSActivity, NSArray, NSSet, NSString, NSURL;

@interface CLSContext : CLSObject <CLSRelationable>
{
    BOOL _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSArray *_path;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    NSString *_summary;
    NSString *_customTypeName;
    struct _NSRange _suggestedAge;
    struct _NSRange _suggestedCompletionTime;
    BOOL _assignable;
    NSString *_identifier;
    long long _type;
    NSString *_stableObjectID;
    NSString *_storeTeamID;
    NSString *_storeIdentifier;
    long long _authorizationStatus;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isAssignable) BOOL assignable; // @synthesize assignable=_assignable;
@property (nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (readonly, nonatomic) CLSActivity *currentActivity;
@property (copy, nonatomic) NSString *currentActivityID;
@property (copy, nonatomic) NSString *customTypeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSArray *identifierPath;
@property (copy, nonatomic) NSArray *path; // @synthesize path=_path;
@property (readonly, copy, nonatomic) NSSet *progressReportingCapabilities;
@property (copy, nonatomic) NSString *stableObjectID; // @synthesize stableObjectID=_stableObjectID;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (copy, nonatomic) NSString *storeTeamID; // @synthesize storeTeamID=_storeTeamID;
@property (nonatomic) struct _NSRange suggestedAge;
@property (nonatomic) struct _NSRange suggestedCompletionTime;
@property (copy, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic) struct CGImage *thumbnail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSURL *universalLinkURL;

+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)defaultProgressReportingCapability;
+ (id)objectIDForIdentifierPath:(id)arg1;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (id)relations;
+ (id)reservedContextTypes;
+ (id)stableObjectIDForIdentifierPath:(id)arg1;
+ (id)stableObjectIDPathFromIdentifierPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)validatedContextIdentifierPathFromPath:(id)arg1;
- (void).cxx_destruct;
- (id)_init;
- (id)_progressReportingCapabilities;
- (void)_setType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)addChildContext:(id)arg1;
- (void)addProgressReportingCapabilities:(id)arg1;
- (void)becomeActive;
- (id)childContextWithIdentifier:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)createNewActivity;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dictionaryRepresentation;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (void)mergeWithObject:(id)arg1;
- (id)newItemProvider;
- (void)removeFromParent;
- (void)resetProgressReportingCapabilities;
- (void)resetProgressReportingCapabilities_unprotected;
- (void)resignActive;
- (void)setIdentifierPathAndGenerateObjectID:(id)arg1;
- (id)thumbnailBlob;
- (id)thumbnailBlobs;
- (BOOL)validateObject:(id *)arg1;

@end
