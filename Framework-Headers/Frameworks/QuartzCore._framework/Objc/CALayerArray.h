//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface CALayerArray : NSArray
{
    struct _CALayerArrayIvars _ivars;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithLayers:(id *)arg1 count:(unsigned long long)arg2 retain:(BOOL)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

