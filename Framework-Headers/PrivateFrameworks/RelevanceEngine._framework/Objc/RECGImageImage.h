//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REImage.h>

@interface RECGImageImage : REImage
{
    struct CGImage *_CGImage;
    double _scale;
}

@property (readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

