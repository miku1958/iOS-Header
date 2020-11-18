//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPTextDelegate-Protocol.h>

@class TSULocale, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    int mVerticalAlignment;
    double mMaxWidthForChildren;
    TSULocale *mLocale;
}

@property (readonly, nonatomic) TSULocale *locale; // @synthesize locale=mLocale;
@property (nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=mMaxWidthForChildren;

- (void)dealloc;
- (BOOL)forceWesternLineBreaking;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(int)arg2 locale:(id)arg3;
- (id)padding;
- (int)verticalAlignment;

@end

