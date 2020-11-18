//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLAssetContainerList-Protocol.h>

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;
}

@property (strong, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (void)dealloc;
- (id)initWithAssetContainer:(id)arg1;
- (id)initWithAssetContainers:(id)arg1;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;

@end
