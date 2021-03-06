//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PhotosControlCommand.h>

@class NSManagedObjectContext, NSObject, NSURL, PHPhotoLibrary, PLPhotosCTL;
@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand
{
    NSManagedObjectContext *_moc;
    PHPhotoLibrary *_photoLibrary;
    NSURL *_libraryURL;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
    struct _NSRange _argumentRangeForRunOnManagedObjects;
}

@property (readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;

+ (struct option *)libraryLongopts;
+ (const char *)libraryOptstring;
+ (id)libraryUsage;
+ (id)libraryUsagesummary;
+ (struct option *)longopts;
+ (const char *)optstring;
+ (id)usage;
+ (id)usagesummary;
- (void).cxx_destruct;
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;
- (BOOL)argument:(id)arg1 isValidDouble:(double *)arg2;
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;
- (void)enterGroup;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3 ctl:(id)arg4;
- (id)jsonDictionaryFromError:(id)arg1;
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;
- (void)leaveGroup;
- (BOOL)libraryProcessOption:(BOOL)arg1 arg:(id)arg2;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)photosCtl;
- (id)plPhotoLibrary;
- (id)processBooleanOptionArg:(id)arg1;
- (BOOL)processOption:(int)arg1 arg:(id)arg2;
- (int)runOnAssetArgumentsAllowAll:(BOOL)arg1 additionalPredicate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(BOOL)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(CDUnknownBlockType)arg6;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(BOOL)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 block:(CDUnknownBlockType)arg7;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(BOOL)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(CDUnknownBlockType)arg4;
- (int)save;
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange)arg1;
- (void)waitForGroup;

@end

