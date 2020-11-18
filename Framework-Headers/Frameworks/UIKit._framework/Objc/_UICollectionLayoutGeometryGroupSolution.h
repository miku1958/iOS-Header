//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutGeometryGroupSolution : NSObject
{
    NSArray *_frames;
    struct CGSize _size;
}

@property (strong, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;

+ (id)solutionWithSize:(struct CGSize)arg1 frames:(id)arg2;
- (void).cxx_destruct;
- (id)frameAtIndex:(long long)arg1 withOffset:(struct CGPoint)arg2;
- (id)framesWithOffset:(struct CGPoint)arg1;
- (id)initWithSize:(struct CGSize)arg1 frames:(id)arg2;

@end
