//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPShape;

__attribute__((visibility("hidden")))
@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying>
{
    CPShape *neighborShape;
    int shapeSide;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initSuper;
- (id)neighborShape;
- (void)setNeighborShape:(id)arg1;
- (void)setShapeSide:(int)arg1;
- (int)shapeSide;

@end

