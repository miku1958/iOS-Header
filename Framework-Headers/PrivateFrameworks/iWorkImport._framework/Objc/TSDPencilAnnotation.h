//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKPencilAnnotation-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>

@class NSString, TSDDrawableInfo, TSDPencilAnnotationStorage, TSKPKDrawing;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>
{
    TSDPencilAnnotationStorage *_pencilAnnotationStorage;
    TSDDrawableInfo *_parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKPKDrawing *drawing; // @dynamic drawing;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) TSDDrawableInfo *parent; // @synthesize parent=_parent;
@property (strong, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // @synthesize pencilAnnotationStorage=_pencilAnnotationStorage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

+ (BOOL)needsObjectUUID;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2;
- (void)loadFromArchive:(const struct PencilAnnotationArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end

