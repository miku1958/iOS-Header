//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKRichBrushStrokePoint : NSObject
{
    double _width;
    struct CGPoint _location;
}

@property (nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (nonatomic) double width; // @synthesize width=_width;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

