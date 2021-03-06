//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCellFontManager : NSObject
{
    UIFont *_titleFontForGridLayout;
    UIFont *_subtitleFontForGridLayout;
    UIFont *_titleFontForTableLayout;
    UIFont *_subtitleFontForTableLayout;
}

@property (strong, nonatomic) UIFont *subtitleFontForGridLayout; // @synthesize subtitleFontForGridLayout=_subtitleFontForGridLayout;
@property (strong, nonatomic) UIFont *subtitleFontForTableLayout; // @synthesize subtitleFontForTableLayout=_subtitleFontForTableLayout;
@property (strong, nonatomic) UIFont *titleFontForGridLayout; // @synthesize titleFontForGridLayout=_titleFontForGridLayout;
@property (strong, nonatomic) UIFont *titleFontForTableLayout; // @synthesize titleFontForTableLayout=_titleFontForTableLayout;

+ (id)sharedFontManager;
- (void).cxx_destruct;
- (void)cacheFonts;
- (id)init;

@end

