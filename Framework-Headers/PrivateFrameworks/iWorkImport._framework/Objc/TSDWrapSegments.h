//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDWrapSegments : NSObject
{
    struct vector<TSDWrapSegment, std::__1::allocator<TSDWrapSegment>> mSegments;
    struct CGRect mBounds;
}

+ (id)wrapSegmentsWithPath:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (void)p_buildSegmentsForPath:(id)arg1;
- (long long)segmentCount;
- (const CDStruct_e3b9714e *)segments;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;

@end
