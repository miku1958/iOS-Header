//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying>
{
    BOOL _userInitiated;
    double _leadingWidth;
    double _trailingWidth;
}

@property (nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
@property (nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property (nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;

- (id)_closestEqualOrLargerState:(id)arg1;
- (id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double *)arg2;
- (id)_closestState:(id)arg1;
- (id)_closestState:(id)arg1 returningDistance:(double *)arg2;
- (id)_matchingState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
