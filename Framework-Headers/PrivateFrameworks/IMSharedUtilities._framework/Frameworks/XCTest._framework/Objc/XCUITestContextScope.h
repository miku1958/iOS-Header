//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface XCUITestContextScope : NSObject
{
    XCUITestContextScope *_parentScope;
    NSMutableArray *_handlers;
}

@property (strong) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property (readonly) XCUITestContextScope *parentScope; // @synthesize parentScope=_parentScope;

- (void)dealloc;
- (id)initWithParentScope:(id)arg1;

@end

