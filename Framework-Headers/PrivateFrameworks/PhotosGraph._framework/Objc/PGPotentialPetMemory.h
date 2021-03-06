//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSMutableSet, PGGraphPersonNode;

@interface PGPotentialPetMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    NSArray *_petAssetLocalIdentifiers;
    PGGraphPersonNode *_ownerPersonNode;
    long long _year;
}

@property (readonly) PGGraphPersonNode *ownerPersonNode; // @synthesize ownerPersonNode=_ownerPersonNode;
@property (strong) NSArray *petAssetLocalIdentifiers; // @synthesize petAssetLocalIdentifiers=_petAssetLocalIdentifiers;
@property (readonly) long long year; // @synthesize year=_year;

- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithOwner:(id)arg1 year:(long long)arg2;

@end

