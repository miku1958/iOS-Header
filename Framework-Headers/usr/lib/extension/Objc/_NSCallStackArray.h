//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray
{
    void **_frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    char **_pcstrs;
    BOOL _wantSyms;
}

+ (id)arrayWithFrames:(void **)arg1 count:(unsigned long long)arg2 symbols:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

