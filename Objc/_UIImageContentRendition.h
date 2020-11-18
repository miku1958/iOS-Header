//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentRendition : NSObject
{
    BOOL _requiresMasking;
    struct CGImage *_CGImage;
    UIColor *_multiplyColor;
}

@property (readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property (readonly, nonatomic) UIColor *multiplyColor; // @synthesize multiplyColor=_multiplyColor;
@property (readonly, nonatomic) BOOL requiresMasking; // @synthesize requiresMasking=_requiresMasking;

+ (id)renditionWithCGImage:(struct CGImage *)arg1 color:(id)arg2 requiresMasking:(BOOL)arg3;
- (void).cxx_destruct;
- (void)dealloc;

@end

