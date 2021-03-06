//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_petSceneNodesForGraph:(id)arg1;
- (id)_petsForSceneNode:(id)arg1 inGraph:(id)arg2;
- (void)_removeAllPetNodesForGraph:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldRunWithGraphUpdate:(id)arg1;

@end

