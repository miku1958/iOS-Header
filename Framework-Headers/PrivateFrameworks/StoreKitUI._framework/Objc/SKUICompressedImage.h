//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class UIColor;

@interface SKUICompressedImage : UIImage
{
    long long _cornerType;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
}

@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) long long cornerType; // @synthesize cornerType=_cornerType;

- (void).cxx_destruct;
- (id)description;

@end

