//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionSizeProviding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionSizeProvider : NSObject <_UICollectionSizeProviding>
{
    NSArray *_sizes;
    long long _fixedSizeCount;
    struct CGSize _fixedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property (nonatomic) long long fixedSizeCount; // @synthesize fixedSizeCount=_fixedSizeCount;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasFixedSizeCount;
- (long long)count;
- (BOOL)indexIsValid:(long long)arg1;
- (id)initWithFixedSize:(struct CGSize)arg1 count:(long long)arg2;
- (id)initWithSizeProvider:(id)arg1 offset:(long long)arg2;
- (id)initWithSizes:(id)arg1;
- (struct CGSize)sizeForIndex:(long long)arg1;

@end

