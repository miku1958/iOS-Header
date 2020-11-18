//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKitUI/NSCopying-Protocol.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying>
{
    CLKFont *_threeDigitFont;
    CLKFont *_fourDigitFont;
    CLKFont *_designatorFont;
}

@property (strong, nonatomic) CLKFont *designatorFont; // @synthesize designatorFont=_designatorFont;
@property (strong, nonatomic) CLKFont *fourDigitFont; // @synthesize fourDigitFont=_fourDigitFont;
@property (strong, nonatomic) CLKFont *threeDigitFont; // @synthesize threeDigitFont=_threeDigitFont;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
