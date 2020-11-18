//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> _strokes;
    BOOL _continuePreviousStroke;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endStroke;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfStrokes;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfPoints;

@end

