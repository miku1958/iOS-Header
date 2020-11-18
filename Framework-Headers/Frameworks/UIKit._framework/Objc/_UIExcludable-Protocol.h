//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString;
@protocol _UIExcludable;

@protocol _UIExcludable <NSObject>
- (NSString *)_briefDescription;
- (BOOL)_canExcludeOtherExcludables;
- (void)_exclude;
- (BOOL)_isExcludedByExcludable:(id<_UIExcludable>)arg1;
@end

