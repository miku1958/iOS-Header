//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol GQUOutputBundle <NSObject>
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (BOOL)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (void)setDocumentSize:(struct CGSize)arg1;
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(BOOL)arg2;
@end
