//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class NSString, TSDFill, TSPObject;
@protocol TPMasterDrawableProvider, TSWPHeaderFooterProvider;

@protocol TPPageLayoutInfoProvider <NSObject>
- (TSDFill *)backgroundFillForPageIndex:(unsigned long long)arg1;
- (BOOL)canProvideInfoForPageIndex:(unsigned long long)arg1;
- (BOOL)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (id<TSWPHeaderFooterProvider>)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (TSPObject<TPMasterDrawableProvider> *)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (NSString *)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
@end

