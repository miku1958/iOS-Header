//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest-Protocol.h>

@class NSManagedObject, PHChangeRequestHelper, PLPhotoLibrary;

@protocol PHInsertChangeRequest <PHChangeRequest>

@property (readonly, nonatomic) PHChangeRequestHelper *helper;
@property (readonly, getter=isNew) BOOL new;

+ (BOOL)canGenerateUUIDWithoutEntitlements;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(PLPhotoLibrary *)arg1;
- (BOOL)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
@end
