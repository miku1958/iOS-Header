//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSULocale, TSWPPadding;

@protocol TSWPTextDelegate

@property (readonly, nonatomic) TSULocale *locale;
@property (readonly, nonatomic) double maxWidthForChildren;
@property (readonly, nonatomic) BOOL shouldHyphenate;

- (TSWPPadding *)padding;
- (int)verticalAlignment;

@optional
- (BOOL)forceWesternLineBreaking;
@end

