//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface DCManagedUpload : NSManagedObject
{
}

+ (id)entityName;
+ (id)saveUploadWithPath:(id)arg1 fileURL:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)temporaryUploadFileURLForItemAtPath:(id)arg1 generationIdentifier:(id)arg2;
+ (id)uploadForPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)uploadForTaskIdentifier:(long long)arg1 sessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)markAsCancelled;
- (void)removeTemporaryUploadFileIfNecessary;
- (void)resetAndIncrementNumberOfRetries;

@end
