//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_25ed71ea *)arg2 forTargetSize:(struct CGSize)arg3;
- (id)description;
- (BOOL)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_25ed71ea *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(BOOL)arg4;
- (void)removeAllSizes;

@end

