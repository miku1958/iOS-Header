//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLImageSize : NSObject
{
    long long _pixelsWide;
    long long _pixelsHigh;
}

@property (readonly) long long pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
@property (readonly) long long pixelsWide; // @synthesize pixelsWide=_pixelsWide;

- (id)description;
- (unsigned long long)hash;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImageSize:(id)arg1;

@end

