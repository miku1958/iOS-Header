//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>
{
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSOrderedSet *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;

- (void).cxx_destruct;
- (BOOL)canEditContainers;
- (id)containers;
- (id)containersRelationshipName;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;

@end
