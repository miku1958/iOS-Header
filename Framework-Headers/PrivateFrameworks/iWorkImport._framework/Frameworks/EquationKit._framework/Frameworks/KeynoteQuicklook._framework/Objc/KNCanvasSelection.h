//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDCanvasSelection.h>

@class NSSet;

@interface KNCanvasSelection : TSDCanvasSelection
{
    NSSet *_buildChunks;
}

@property (strong, nonatomic) NSSet *buildChunks; // @synthesize buildChunks=_buildChunks;
@property (readonly, nonatomic) BOOL containsOnlyUnlockedInfosSupportingHyperlinkActions;
@property (readonly, nonatomic) NSSet *drawableInfos;
@property (readonly, nonatomic) NSSet *unlockedDrawableInfos;
@property (readonly, nonatomic) NSSet *unlockedInfosSupportingHyperlinkActions;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (BOOL)containsBuildChunksOfAnimationType:(long long)arg1;
- (id)copyExcludingBuildChunks:(id)arg1;
- (id)copyReplacingChunksWithChunks:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInfos:(id)arg1;
- (id)initWithInfos:(id)arg1 buildChunks:(id)arg2;
- (id)initWithPersistableInfos:(id)arg1 drawableToActionGhostIndexPromiseMap:(id)arg2 buildChunks:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1;
- (id)subclassDescription;

@end

