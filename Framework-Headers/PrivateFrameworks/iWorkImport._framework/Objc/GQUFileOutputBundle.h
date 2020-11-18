//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQUOutputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUFileOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFURL *mOutputUrl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;
- (void)dealloc;
- (id)initWithOutputPath:(struct __CFString *)arg1;
- (BOOL)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData *)arg1;
- (void)setDocumentSize:(struct CGSize)arg1;
- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(BOOL)arg2;

@end

