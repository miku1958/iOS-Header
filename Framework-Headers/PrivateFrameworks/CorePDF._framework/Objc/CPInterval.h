//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPInterval : NSObject
{
    double left;
    double right;
}

- (void)add:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)initLeft:(double)arg1 right:(double)arg2;
- (BOOL)intersects:(id)arg1;
- (double)left;
- (double)right;

@end

