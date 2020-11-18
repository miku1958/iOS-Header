//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKEditAction : NSObject
{
    BOOL _destructive;
    NSString *_name;
    SEL _selector;
}

@property (nonatomic) BOOL destructive; // @synthesize destructive=_destructive;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) SEL selector; // @synthesize selector=_selector;

+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;
+ (id)deleteActionWithName:(id)arg1;
- (void)dealloc;

@end

