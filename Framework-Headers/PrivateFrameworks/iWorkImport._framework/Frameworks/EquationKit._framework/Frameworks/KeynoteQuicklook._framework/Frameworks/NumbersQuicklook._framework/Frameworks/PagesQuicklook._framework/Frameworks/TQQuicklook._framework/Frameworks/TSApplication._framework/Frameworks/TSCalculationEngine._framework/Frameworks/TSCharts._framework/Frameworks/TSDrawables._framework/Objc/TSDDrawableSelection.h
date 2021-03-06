//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@class NSSet, NSString, TSDInfoCollectionSelectionHelper;

@interface TSDDrawableSelection : TSKSelection
{
    TSDInfoCollectionSelectionHelper *_selectionHelper;
}

@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (strong, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct DrawableSelectionArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct DrawableSelectionArchive *)arg1 archiver:(id)arg2;

@end

