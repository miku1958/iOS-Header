//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class UIColor;

@interface PXGGradient : NSObject <NSCopying>
{
    UIColor *_startingColor;
    UIColor *_endingColor;
    long long _direction;
}

@property (readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property (readonly, copy, nonatomic) UIColor *endingColor; // @synthesize endingColor=_endingColor;
@property (readonly, copy, nonatomic) UIColor *startingColor; // @synthesize startingColor=_startingColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 direction:(long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end
