//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXGSpriteReference;

@interface PXGDecorationReference : NSObject
{
    PXGSpriteReference *_decoratedSpriteReference;
    long long _decorationType;
}

@property (readonly, nonatomic) PXGSpriteReference *decoratedSpriteReference; // @synthesize decoratedSpriteReference=_decoratedSpriteReference;
@property (readonly, nonatomic) long long decorationType; // @synthesize decorationType=_decorationType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDecoratedSpriteReference:(id)arg1 decorationType:(long long)arg2;

@end

