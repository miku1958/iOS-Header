//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory
{
    NSSet *_personNodes;
    NSArray *_facedAssets;
}

@property (strong, nonatomic) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property (readonly, nonatomic) NSSet *personNodes; // @synthesize personNodes=_personNodes;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2;

@end
