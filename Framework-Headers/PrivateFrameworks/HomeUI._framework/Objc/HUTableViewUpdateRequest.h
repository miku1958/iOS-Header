//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUTableViewUpdateRequest : NSObject
{
    BOOL _animate;
    CDUnknownBlockType _updateBlock;
}

@property (readonly, nonatomic) BOOL animate; // @synthesize animate=_animate;
@property (readonly, copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1 animate:(BOOL)arg2;

@end

