//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDPath.h>

__attribute__((visibility("hidden")))
@interface GQDPointPath : GQDPath
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mSize;
}

- (struct CGPath *)createBezierPath;
- (int)mapStrType:(struct __CFString *)arg1;
- (struct CGPoint)point;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (struct CGSize)size;
- (int)type;

@end

