//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class TSURectList;
@protocol TSWPTextAdornmentRenderer;

@protocol TSWPTextAdornment <NSObject>

@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) struct CGRect erasableBounds;
@property (readonly, nonatomic) struct CGRect glyphBounds;
@property (readonly, nonatomic) BOOL suppressLineFragmentTextRendering;
@property (readonly, nonatomic) struct CGRect trailingCaretBounds;

- (id<TSWPTextAdornmentRenderer>)adornmentRenderer;
- (void)offsetBy:(struct CGSize)arg1;
- (TSURectList *)splitLine:(struct CGRect)arg1 skipHint:(out double *)arg2;
@end
