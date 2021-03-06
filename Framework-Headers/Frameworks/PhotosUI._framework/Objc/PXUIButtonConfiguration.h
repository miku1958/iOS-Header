//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXUIButtonConfiguration : NSObject
{
    BOOL _allowAnimatedHighlighting;
    long long _cursorEffect;
    struct UIEdgeInsets _hitTestOutset;
}

@property (nonatomic) BOOL allowAnimatedHighlighting; // @synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting;
@property (nonatomic) long long cursorEffect; // @synthesize cursorEffect=_cursorEffect;
@property (nonatomic) struct UIEdgeInsets hitTestOutset; // @synthesize hitTestOutset=_hitTestOutset;

+ (id)configurationWithCursorEffect:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

