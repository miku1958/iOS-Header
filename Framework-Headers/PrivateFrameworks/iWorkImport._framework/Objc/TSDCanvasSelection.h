//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import <iWorkImport/TSDCanvasSelection-Protocol.h>

@class NSSet, NSString, TSDInfoCollectionSelectionHelper;

__attribute__((visibility("hidden")))
@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>
{
    TSDInfoCollectionSelectionHelper *_selectionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (strong, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
@property (readonly, nonatomic) NSString *subclassDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct CanvasSelectionArchive *)arg1 archiver:(id)arg2;

@end

