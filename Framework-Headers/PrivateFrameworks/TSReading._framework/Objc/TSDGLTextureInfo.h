//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLTextureInfo : NSObject
{
    BOOL _containsMipmaps;
    unsigned int _name;
    unsigned int _target;
    unsigned int _height;
    unsigned int _width;
}

@property (readonly, nonatomic) BOOL containsMipmaps; // @synthesize containsMipmaps=_containsMipmaps;
@property (readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property (readonly, nonatomic) unsigned int name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned int target; // @synthesize target=_target;
@property (readonly, nonatomic) unsigned int width; // @synthesize width=_width;

- (id)initWithName:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 containsMipmaps:(BOOL)arg5;
- (void)teardown;

@end

