//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCHGridPartitioner : NSObject
{
    struct CGSize _targetSize;
    struct CGRect _sourceRect;
    struct CGAffineTransform _transform;
}

@property (readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;

- (unsigned long long)gridKeyForSourcePoint:(struct CGPoint)arg1;
- (id)initWithSourceRect:(struct CGRect)arg1 gridWidth:(unsigned long long)arg2 gridHeight:(unsigned long long)arg3;
- (id)initWithSourceSize:(struct CGSize)arg1 gridWidth:(unsigned long long)arg2 gridHeight:(unsigned long long)arg3;

@end

