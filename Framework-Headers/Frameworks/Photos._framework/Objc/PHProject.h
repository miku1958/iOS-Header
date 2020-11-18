//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSData, NSString;

@interface PHProject : PHAssetCollection
{
    NSData *_projectExtensionData;
    NSString *_projectExtensionIdentifier;
    NSString *_projectDocumentType;
    NSString *_projectRenderUuid;
}

@property (readonly, nonatomic) BOOL hasProjectPreview;
@property (readonly, nonatomic) NSData *projectData;
@property (readonly, nonatomic) NSString *projectDocumentType; // @synthesize projectDocumentType=_projectDocumentType;
@property (readonly, nonatomic) NSData *projectExtensionData; // @synthesize projectExtensionData=_projectExtensionData;
@property (readonly, nonatomic) NSString *projectExtensionIdentifier; // @synthesize projectExtensionIdentifier=_projectExtensionIdentifier;
@property (readonly, nonatomic) NSString *projectRenderUuid; // @synthesize projectRenderUuid=_projectRenderUuid;

+ (id)entityKeyMap;
+ (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchProjectsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canContainCustomKeyAssets;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end
