//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TDPackerNode : NSObject
{
    BOOL _used;
    BOOL _fit;
    _TDPackerNode *_down;
    _TDPackerNode *_right;
    void *_node;
    struct CGSize _size;
    struct CGPoint _origin;
}

@property (strong) _TDPackerNode *down; // @synthesize down=_down;
@property BOOL fit; // @synthesize fit=_fit;
@property void *node; // @synthesize node=_node;
@property struct CGPoint origin; // @synthesize origin=_origin;
@property (strong) _TDPackerNode *right; // @synthesize right=_right;
@property struct CGSize size; // @synthesize size=_size;
@property BOOL used; // @synthesize used=_used;

- (void)dealloc;

@end
