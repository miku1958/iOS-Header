//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface CoreUtilsNSSubrangeData : NSData
{
    NSData *_data;
    struct _NSRange _range;
}

- (void).cxx_destruct;
- (BOOL)_isCompact;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)getBytes:(void *)arg1;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (id)init;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)length;

@end

