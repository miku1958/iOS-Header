//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSUImage;

__attribute__((visibility("hidden")))
@interface TSKPencilOverlayRenderingDetails : NSObject
{
    BOOL _isSelected;
    TSUImage *_rasterizedImage;
    struct CGPath *_path;
    NSMutableArray *_mutableUnscaledSelectionRects;
    struct CGRect _unscaledImageFrame;
}

@property (nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property (strong, nonatomic) NSMutableArray *mutableUnscaledSelectionRects; // @synthesize mutableUnscaledSelectionRects=_mutableUnscaledSelectionRects;
@property (nonatomic) struct CGPath *path; // @synthesize path=_path;
@property (readonly, nonatomic) TSUImage *rasterizedImage; // @synthesize rasterizedImage=_rasterizedImage;
@property (nonatomic) struct CGRect unscaledImageFrame; // @synthesize unscaledImageFrame=_unscaledImageFrame;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;

@end

