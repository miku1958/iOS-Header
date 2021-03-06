//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@class KNSlideNode, NSOrderedSet;

@interface KNSlideCollectionSelection : TSKSelection
{
    NSOrderedSet *_slideNodes;
    KNSlideNode *_slideNodeToEdit;
}

@property (readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) KNSlideNode *slideNodeToEdit; // @synthesize slideNodeToEdit=_slideNodeToEdit;
@property (readonly, nonatomic) NSOrderedSet *slideNodes; // @synthesize slideNodes=_slideNodes;

+ (Class)archivedSelectionClass;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithSlideNode:(id)arg1;
- (id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive *)arg1 archiver:(id)arg2;

@end

