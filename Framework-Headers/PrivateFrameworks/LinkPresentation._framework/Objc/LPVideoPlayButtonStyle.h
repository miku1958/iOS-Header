//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPSize;

__attribute__((visibility("hidden")))
@interface LPVideoPlayButtonStyle : NSObject
{
    LPSize *_size;
    LPSize *_backgroundSize;
    double _disabledOpacity;
}

@property (strong, nonatomic) LPSize *backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property (nonatomic) double disabledOpacity; // @synthesize disabledOpacity=_disabledOpacity;
@property (strong, nonatomic) LPSize *size; // @synthesize size=_size;

- (void).cxx_destruct;
- (id)init;

@end

