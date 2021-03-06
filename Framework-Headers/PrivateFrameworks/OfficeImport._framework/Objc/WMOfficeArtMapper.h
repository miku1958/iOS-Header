//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

__attribute__((visibility("hidden")))
@interface WMOfficeArtMapper : CMDrawableMapper
{
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    unsigned int mCurrentPage;
}

- (void).cxx_destruct;
- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 parent:(id)arg3;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (BOOL)isInsideGroup;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setIsInsideGroup:(BOOL)arg1;
- (void)setWithClientData:(id)arg1 state:(id)arg2;

@end

