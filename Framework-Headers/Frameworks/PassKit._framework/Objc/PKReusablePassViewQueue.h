//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject
{
    NSMutableSet *_passViews;
}

- (void)dealloc;
- (id)dequeueReusablePassView;
- (void)enqueueReusablePassView:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;

@end
