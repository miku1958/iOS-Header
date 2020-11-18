//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class TSPObject;
@protocol TSKPencilAnnotation;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotationSelection : TSKSelection
{
    TSPObject<TSKPencilAnnotation> *_pencilAnnotation;
}

@property (readonly, nonatomic) TSPObject<TSKPencilAnnotation> *pencilAnnotation; // @synthesize pencilAnnotation=_pencilAnnotation;

+ (Class)archivedSelectionClass;
- (void).cxx_destruct;
- (BOOL)canRemainDuringSharedReadOnlyMode;
- (BOOL)canSaveSelectionToArchivedViewState;
- (id)initWithPencilAnnotation:(id)arg1;

@end
