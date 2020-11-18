//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDShapeInfo.h>

@class NSUUID, TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineInfo : TSDShapeInfo
{
    NSUUID *mConnectedFromID;
    NSUUID *mConnectedToID;
    TSDDrawableInfo *mConnectedToInfo;
    TSDDrawableInfo *mConnectedFromInfo;
    struct {
        unsigned int connectedFrom:1;
        unsigned int connectedTo:1;
    } mInvalidFlags;
    BOOL mWriteConnectedReferencesForCopies;
}

@property (strong, nonatomic) TSDDrawableInfo *connectedFrom;
@property (strong, nonatomic) NSUUID *connectedFromID; // @synthesize connectedFromID=mConnectedFromID;
@property (strong, nonatomic) TSDDrawableInfo *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property (strong, nonatomic) TSDDrawableInfo *connectedTo;
@property (strong, nonatomic) NSUUID *connectedToID; // @synthesize connectedToID=mConnectedToID;
@property (strong, nonatomic) TSDDrawableInfo *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
- (BOOL)canAnchor;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (id)computeLayoutInfoGeometry;
- (void)computeLayoutInfoGeometry:(id *)arg1 andPathSource:(id *)arg2;
- (id)copyWithContext:(id)arg1;
- (void)didCopy;
- (int)elementKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (BOOL)isLine;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ConnectionLineArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (id)presetKind;
- (Class)repClass;
- (void)saveGeometryToArchive:(struct GeometryArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct ConnectionLineArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shouldPreventCopyOperationWithOtherInfos:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
