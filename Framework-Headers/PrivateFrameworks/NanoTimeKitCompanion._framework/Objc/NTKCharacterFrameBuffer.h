//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKCharacterFrameBuffer : NSObject
{
    unsigned int _defaultFBOName;
    unsigned int _colorRenderbuffer;
    int _width;
    int _height;
}

- (id)initWithLayer:(id)arg1;
- (void)invalidate;
- (void)present;
- (BOOL)resizeWithLayer:(id)arg1;
- (void)setupWithLayer:(id)arg1;
- (BOOL)validWithLayer:(id)arg1;

@end

