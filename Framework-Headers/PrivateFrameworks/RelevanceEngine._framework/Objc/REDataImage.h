//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REImage.h>

@class NSData;

@interface REDataImage : REImage
{
    NSData *_data;
    double _scale;
}

@property (readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

