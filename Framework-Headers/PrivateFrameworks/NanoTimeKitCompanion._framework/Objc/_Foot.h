//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Foot : _Geometry
{
    BOOL _animFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    NSMutableArray *_texs;
}

@property (nonatomic) BOOL animFrame; // @synthesize animFrame=_animFrame;
@property (nonatomic) BOOL frameDisplayTime60th; // @synthesize frameDisplayTime60th=_frameDisplayTime60th;
@property (nonatomic) unsigned char state; // @synthesize state=_state;
@property (strong, nonatomic) NSMutableArray *texs; // @synthesize texs=_texs;

- (void).cxx_destruct;

@end
