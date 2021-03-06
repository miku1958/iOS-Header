//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/_Geometry.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@interface _Body : _Geometry
{
    BOOL _animationDirection;
    BOOL _animationFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    unsigned char _waitingForFootRaise;
    float _width;
    float _height;
    float _curBodyX;
    NSArray *_texs;
    NSMutableArray *_shiftTexs12;
    NSMutableArray *_shiftTexs14;
    NSMutableArray *_shiftTexs23;
    NSMutableArray *_shiftTexs13;
    MISSING_TYPE *_bone;
    MISSING_TYPE *_offset;
}

@property (nonatomic) BOOL animationDirection; // @synthesize animationDirection=_animationDirection;
@property (nonatomic) BOOL animationFrame; // @synthesize animationFrame=_animationFrame;
@property (nonatomic) MISSING_TYPE *bone; // @synthesize bone=_bone;
@property (nonatomic) float curBodyX; // @synthesize curBodyX=_curBodyX;
@property (nonatomic) BOOL frameDisplayTime60th; // @synthesize frameDisplayTime60th=_frameDisplayTime60th;
@property (nonatomic) float height; // @synthesize height=_height;
@property (nonatomic) MISSING_TYPE *offset; // @synthesize offset=_offset;
@property (strong, nonatomic) NSMutableArray *shiftTexs12; // @synthesize shiftTexs12=_shiftTexs12;
@property (strong, nonatomic) NSMutableArray *shiftTexs13; // @synthesize shiftTexs13=_shiftTexs13;
@property (strong, nonatomic) NSMutableArray *shiftTexs14; // @synthesize shiftTexs14=_shiftTexs14;
@property (strong, nonatomic) NSMutableArray *shiftTexs23; // @synthesize shiftTexs23=_shiftTexs23;
@property (nonatomic) unsigned char state; // @synthesize state=_state;
@property (strong, nonatomic) NSArray *texs; // @synthesize texs=_texs;
@property (nonatomic) unsigned char waitingForFootRaise; // @synthesize waitingForFootRaise=_waitingForFootRaise;
@property (nonatomic) float width; // @synthesize width=_width;

- (void).cxx_destruct;

@end

