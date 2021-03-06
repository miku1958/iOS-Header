//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSDate, NSDictionary, NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHQuestionChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
}

@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short displayType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isNewRequest;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedQuestion;
@property (nonatomic) double score;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (nonatomic) unsigned short state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short type;

+ (id)changeRequestForQuestion:(id)arg1;
+ (id)creationRequestForQuestionWithEntityIdentifier:(id)arg1 type:(unsigned short)arg2 state:(unsigned short)arg3 entityType:(unsigned short)arg4 displayType:(unsigned short)arg5 score:(double)arg6 additionalInfo:(id)arg7 creationDate:(id)arg8;
+ (void)deleteQuestions:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;

@end

