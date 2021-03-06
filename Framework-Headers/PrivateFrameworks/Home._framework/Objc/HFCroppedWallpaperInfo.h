//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@interface HFCroppedWallpaperInfo : NSObject <NSCopying>
{
    long long _source;
    double _scale;
    struct CGPoint _center;
}

@property (readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property (readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) long long source; // @synthesize source=_source;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(long long)arg1 center:(struct CGPoint)arg2 scale:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end

