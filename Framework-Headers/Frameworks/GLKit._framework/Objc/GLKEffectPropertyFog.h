//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty
{
    unsigned char _enabled;
    int _mode;
    union _GLKVector4 _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

@property (nonatomic) union _GLKVector4 color; // @synthesize color=_color;
@property (nonatomic) int colorLoc; // @synthesize colorLoc=_colorLoc;
@property (nonatomic) float density; // @synthesize density=_density;
@property (nonatomic) int densityLoc; // @synthesize densityLoc=_densityLoc;
@property (nonatomic) unsigned char enabled; // @synthesize enabled=_enabled;
@property (nonatomic) float end; // @synthesize end=_end;
@property (nonatomic) int endLoc; // @synthesize endLoc=_endLoc;
@property (nonatomic) int mode; // @synthesize mode=_mode;
@property (nonatomic) int modeLoc; // @synthesize modeLoc=_modeLoc;
@property (nonatomic) float start; // @synthesize start=_start;
@property (nonatomic) int startLoc; // @synthesize startLoc=_startLoc;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
- (void)bind;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (BOOL)includeFshShaderTextForRootNode:(id)arg1;
- (BOOL)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (void)initializeMasks;
- (void)setShaderBindings;

@end
