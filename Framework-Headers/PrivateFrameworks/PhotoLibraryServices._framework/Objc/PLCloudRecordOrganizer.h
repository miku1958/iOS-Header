//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, PLPhotoLibrary;

@interface PLCloudRecordOrganizer : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_assetRecordsWithContainerChange;
    NSMutableArray *_albumRecordsWithContainerChange;
    NSMutableArray *_personRecords;
    NSMutableArray *_masterRecords;
    NSMutableArray *_assetRecords;
    NSMutableArray *_albumRecords;
    NSMutableArray *_memoryRecords;
    NSMutableArray *_faceCropRecords;
    NSMutableArray *_deleteRecords;
    NSMutableArray *_deletePersonRecords;
    NSMutableArray *_expungedRecords;
}

@property (readonly) NSMutableArray *albumRecords; // @synthesize albumRecords=_albumRecords;
@property (readonly) NSMutableArray *albumRecordsWithContainerChange; // @synthesize albumRecordsWithContainerChange=_albumRecordsWithContainerChange;
@property (readonly) NSMutableArray *assetRecords; // @synthesize assetRecords=_assetRecords;
@property (readonly) NSMutableArray *assetRecordsWithContainerChange; // @synthesize assetRecordsWithContainerChange=_assetRecordsWithContainerChange;
@property (readonly) NSMutableArray *deletePersonRecords; // @synthesize deletePersonRecords=_deletePersonRecords;
@property (readonly) NSMutableArray *deleteRecords; // @synthesize deleteRecords=_deleteRecords;
@property (readonly) NSMutableArray *expungedRecords; // @synthesize expungedRecords=_expungedRecords;
@property (readonly) NSMutableArray *faceCropRecords; // @synthesize faceCropRecords=_faceCropRecords;
@property (readonly) NSMutableArray *masterRecords; // @synthesize masterRecords=_masterRecords;
@property (readonly) NSMutableArray *memoryRecords; // @synthesize memoryRecords=_memoryRecords;
@property (readonly) NSMutableArray *personRecords; // @synthesize personRecords=_personRecords;

+ (BOOL)records:(id)arg1 containsIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)organizeRecords:(id)arg1;

@end

