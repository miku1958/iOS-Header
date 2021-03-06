//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableRLEArray, NSStorage, NSTextRange;
@protocol NSTextLocation, __NSTextRunStorageDataSource;

__attribute__((visibility("hidden")))
@interface _NSTextRunStorage : NSObject
{
    id<__NSTextRunStorageDataSource> _dataSource;
    NSMutableRLEArray *_RLEArray;
    NSStorage *_elements;
    NSTextRange *_seedRange;
    long long _seedElementIndex;
    BOOL _isCountable;
    BOOL _hasBaseLocation;
    BOOL _mapsLocationOffset;
    id<NSTextLocation> _baseLocation;
}

@property (readonly) long long baseIndex;
@property (readonly) id<NSTextLocation> baseLocation;
@property (readonly) id<__NSTextRunStorageDataSource> dataSource; // @synthesize dataSource=_dataSource;

- (void)dealloc;
- (id)description;
- (id)enumerateObjectsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithDataSource:(id)arg1;
- (void)invalidateElementsInRange:(id)arg1 delta:(long long)arg2;
- (void)setObject:(id)arg1 forRange:(id)arg2;

@end

