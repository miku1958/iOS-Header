//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSData;

@protocol QLRemotePrintPageHelper <NSObject>

@property (nonatomic) struct CGSize printableSize;

- (long long)numberOfPages;
- (NSData *)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL *)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
@end

