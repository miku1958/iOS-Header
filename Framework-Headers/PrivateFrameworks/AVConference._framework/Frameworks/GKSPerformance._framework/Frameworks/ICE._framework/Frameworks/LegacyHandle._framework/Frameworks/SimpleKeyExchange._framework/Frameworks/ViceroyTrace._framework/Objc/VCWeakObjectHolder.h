//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCWeakObjectHolder : NSObject
{
    id _weakObject;
    struct OpaqueFigCFWeakReference *_weakObjectWithoutAutoRelease;
}

@property (readonly, nonatomic) id strong;
@property (readonly, nonatomic) struct OpaqueFigCFWeakReference **weak;

+ (id)weakObjectHolderWithObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;

@end
