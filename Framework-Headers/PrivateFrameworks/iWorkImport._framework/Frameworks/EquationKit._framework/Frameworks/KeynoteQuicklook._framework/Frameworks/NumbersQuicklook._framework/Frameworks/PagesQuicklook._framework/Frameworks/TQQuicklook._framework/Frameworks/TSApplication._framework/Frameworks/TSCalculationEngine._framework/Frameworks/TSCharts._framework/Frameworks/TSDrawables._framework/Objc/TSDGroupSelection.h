//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDDrawableSelection.h>

@class NSSet;

@interface TSDGroupSelection : TSDDrawableSelection
{
    BOOL _hasSelectedInfosInNonGroupContainer;
}

@property (readonly, nonatomic) NSSet *containerGroups;
@property (nonatomic) BOOL hasSelectedInfosInNonGroupContainer; // @synthesize hasSelectedInfosInNonGroupContainer=_hasSelectedInfosInNonGroupContainer;
@property (readonly, nonatomic) BOOL isCrossContainerSelection;

+ (Class)archivedSelectionClass;
- (unsigned long long)hash;
- (id)initWithContainerGroups:(id)arg1 hasSelectedInfosInNonGroupContainer:(BOOL)arg2;
- (id)initWithGroupInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)subclassDescription;

@end

