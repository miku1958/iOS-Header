//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TNPageController, TNPageCoordinateDictionary, TSDDrawableInfo;

__attribute__((visibility("hidden")))
@interface TNHintCache : NSObject
{
    TNPageController *mPageController;
    TSDDrawableInfo *mInfo;
    CDStruct_39acd760 mPageRange;
    BOOL mIsMaxColumnValid;
    BOOL mIsMaxRowValid;
    TNPageCoordinateDictionary *mHintCacheEntryDictionary;
}

@property (strong) TSDDrawableInfo *info; // @synthesize info=mInfo;
@property (readonly) TNPageController *pageController; // @synthesize pageController=mPageController;

- (void)dealloc;
- (id)initWithInfo:(id)arg1 pageController:(id)arg2;
- (void)invalidate;
- (id)layoutAtCoordinate:(struct TSUCellCoord)arg1 parentLayout:(id)arg2;
- (id)p_hintCacheEntryAtCoordinate:(struct TSUCellCoord)arg1;
- (CDStruct_39acd760)pageRangeWithUpperBound:(struct TSUCellCoord)arg1;

@end

