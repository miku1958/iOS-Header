//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    BOOL mIsRelative;
}

- (id).cxx_construct;
- (struct EDCellAnchorMarker)from;
- (BOOL)isRelative;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (void)setRelative:(BOOL)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;

@end
