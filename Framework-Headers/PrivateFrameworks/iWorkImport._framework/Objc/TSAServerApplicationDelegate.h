//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSABaseApplicationDelegate;

__attribute__((visibility("hidden")))
@interface TSAServerApplicationDelegate : NSObject
{
    TSABaseApplicationDelegate *_baseApplicationDelegate;
}

@property (strong, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate; // @synthesize baseApplicationDelegate=_baseApplicationDelegate;

+ (id)sharedDelegate;
- (void).cxx_destruct;
- (id)init;
- (id)initWithBaseApplicationDelegate:(id)arg1;

@end
