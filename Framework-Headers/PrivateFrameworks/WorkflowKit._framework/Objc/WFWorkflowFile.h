//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSItemProviderWriting-Protocol.h>
#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowQuarantine;

@interface WFWorkflowFile : NSObject <WFRecordStorage, NSItemProviderWriting>
{
    NSString *_name;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    WFWorkflowQuarantine *_quarantine;
    NSMutableDictionary *_rootObject;
    WFFileRepresentation *_file;
}

@property (copy, nonatomic) NSArray *actions;
@property (strong, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly, nonatomic) WFFileRepresentation *file; // @synthesize file=_file;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFWorkflowIcon *icon;
@property (copy, nonatomic) NSArray *importQuestions;
@property (copy, nonatomic) NSArray *inputClasses;
@property (copy, nonatomic) NSString *lastMigratedClientVersion;
@property (copy, nonatomic) NSString *minimumClientVersion;
@property (strong, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) WFWorkflowQuarantine *quarantine; // @synthesize quarantine=_quarantine;
@property (readonly, nonatomic) NSMutableDictionary *rootObject; // @synthesize rootObject=_rootObject;
@property (readonly, nonatomic) NSDictionary *rootObjectForExport;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *workflowTypes;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
- (id)descriptor;
- (id)fileDataWithError:(id *)arg1;
- (id)init;
- (id)initWithDescriptor:(id)arg1 performMigration:(BOOL)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 name:(id)arg2;
- (id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(BOOL)arg3;
- (id)initWithFileData:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)migrateRootObject;
- (void)migrateTypesForImport;
- (id)recordRepresentationWithError:(id *)arg1;
- (id)writeToDiskWithError:(id *)arg1;
- (BOOL)writeToOutputStream:(id)arg1 error:(id *)arg2;

@end
