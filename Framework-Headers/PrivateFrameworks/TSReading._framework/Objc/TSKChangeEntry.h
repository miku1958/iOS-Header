//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSKChangeEntry : NSObject
{
    id mChangeSource;
    NSMutableArray *mChanges;
}

@property (readonly, nonatomic) id changeSource; // @synthesize changeSource=mChangeSource;
@property (readonly, nonatomic) NSMutableArray *changes; // @synthesize changes=mChanges;

- (void)dealloc;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end
