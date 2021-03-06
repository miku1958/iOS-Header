//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQUProgressiveHelper : NSObject
{
    const void *mClient;
    CDStruct_ba543347 *mCallBacks;
    unsigned char started;
    struct __CFString *mNumbersSheetUri;
    float mPreviewHeight;
    float mPreviewWidth;
    BOOL mStartedMainHTML;
}

- (void)appendDataToAttachment:(struct __CFURL *)arg1 chunk:(struct __CFData *)arg2;
- (void)closeAttachment:(struct __CFURL *)arg1;
- (struct __CFURL *)createAttachment:(struct __CFString *)arg1 options:(struct __CFDictionary *)arg2;
- (void)dealloc;
- (void)displayGenericError:(struct __CFError *)arg1;
- (struct __CFString *)getNumbersSheetUri;
- (float)getPreviewHeight;
- (float)getPreviewWidth;
- (id)initWithClient:(const void *)arg1 andCallbacks:(CDStruct_ba543347 *)arg2;
- (BOOL)previewHasStreamedMainHTML;
- (BOOL)progressiveStreamStarted;
- (void)setNumbersSheetUri:(struct __CFString *)arg1;
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;
- (void)startDataWithOptions:(struct __CFDictionary *)arg1;

@end

