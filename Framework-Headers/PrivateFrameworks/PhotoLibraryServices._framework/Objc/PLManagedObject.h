//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, PLPhotoLibrary;

@interface PLManagedObject : NSManagedObject
{
}

@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, strong, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;

- (BOOL)isSyncableChange;
- (id)pointerDescription;
- (BOOL)supportsCloudUpload;
- (id)truncatedDescriptionWithPropertyKeys:(id)arg1;
- (void)willSave;

@end

