//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class MDLMesh, NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec
{
}

@property (strong, nonatomic) MDLMesh *mesh; // @dynamic mesh;
@property (strong, nonatomic) NSOrderedSet *submeshes; // @dynamic submeshes;

+ (id)fetchRequest;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
