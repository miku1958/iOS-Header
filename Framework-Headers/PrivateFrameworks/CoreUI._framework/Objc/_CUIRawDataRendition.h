//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIRawDataRendition : CUIThemeRendition
{
    struct __CFData *_dataBytes;
}

- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (int)pixelFormat;

@end
