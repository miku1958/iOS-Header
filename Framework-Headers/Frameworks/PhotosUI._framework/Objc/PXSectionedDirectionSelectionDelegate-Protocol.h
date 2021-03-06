//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXIndexPathSet, PXSectionedSelectionManager;

@protocol PXSectionedDirectionSelectionDelegate <NSObject>
- (long long)selectionBasisForSelectionManager:(PXSectionedSelectionManager *)arg1;
- (struct PXSimpleIndexPath)selectionManager:(PXSectionedSelectionManager *)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg2 inDirection:(unsigned long long)arg3;
- (PXIndexPathSet *)selectionManager:(PXSectionedSelectionManager *)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath)arg2 andIndexPath:(struct PXSimpleIndexPath)arg3 inDirection:(unsigned long long)arg4;
@end

