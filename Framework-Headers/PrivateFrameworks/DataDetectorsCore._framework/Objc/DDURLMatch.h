//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDURLMatch : NSObject
{
    struct _NSRange _range;
    NSString *_url;
}

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithRange:(struct _NSRange)arg1 url:(id)arg2;
- (struct _NSRange)range;
- (id)url;

@end

