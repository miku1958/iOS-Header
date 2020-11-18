//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSDHint;

@interface TNHintCacheEntry : NSObject
{
    id<TSDHint> mHint;
    BOOL mIsValid;
    struct CGPoint mOrigin;
}

@property (strong) id<TSDHint> hint; // @synthesize hint=mHint;
@property struct CGPoint origin; // @synthesize origin=mOrigin;
@property (getter=isValid) BOOL valid; // @synthesize valid=mIsValid;

- (void)dealloc;
- (id)initWithHint:(id)arg1 origin:(struct CGPoint)arg2;

@end
