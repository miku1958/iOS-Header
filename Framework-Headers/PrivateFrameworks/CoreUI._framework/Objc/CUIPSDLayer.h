//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CUIPSDLayer : NSObject
{
    double _opacity;
    int _blendMode;
    NSString *_name;
}

@property (nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;

- (void)dealloc;
- (id)init;

@end
