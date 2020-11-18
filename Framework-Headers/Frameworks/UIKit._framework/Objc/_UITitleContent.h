//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITitleContent : NSObject
{
    NSString *_title;
    double _width;
}

@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) double width; // @synthesize width=_width;

+ (id)contentWithTitle:(id)arg1 button:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithButton:(id)arg1;

@end

