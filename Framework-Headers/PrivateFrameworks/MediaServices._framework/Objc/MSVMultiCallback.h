//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MSVMultiCallback : NSObject
{
    NSMutableArray *_callbacks;
}

- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;

@end

