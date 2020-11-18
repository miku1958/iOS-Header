//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDPencilAnnotationSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedPencilAnnotationSelection : TSPObject <TSKArchivedSelection>
{
    TSDPencilAnnotationSelection *_pencilAnnotationSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSDPencilAnnotationSelection *pencilAnnotationSelection; // @synthesize pencilAnnotationSelection=_pencilAnnotationSelection;
@property (strong, nonatomic) TSKSelection *selection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PencilAnnotationSelectionArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

