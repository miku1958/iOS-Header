//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class IKColor, NSArray, UIColor;

@interface TVColor : NSObject <NSCopying>
{
    IKColor *_ikColor;
}

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) long long colorType;
@property (readonly, nonatomic) NSArray *gradientColors;
@property (readonly, nonatomic) NSArray *gradientPoints;
@property (readonly, weak, nonatomic) IKColor *ikColor; // @synthesize ikColor=_ikColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1;

@end

