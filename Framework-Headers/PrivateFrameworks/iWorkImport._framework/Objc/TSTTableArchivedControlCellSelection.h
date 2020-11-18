//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTTableControlCellSelection;

__attribute__((visibility("hidden")))
@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection>
{
    TSTTableControlCellSelection *mControlCellSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSKSelection *selection; // @synthesize selection=mControlCellSelection;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
