//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _RWIAutomaticInspectionSession : NSObject
{
    NSString *_identifier;
    NSArray *_debuggers;
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    unsigned long long _currentDebuggerIndex;
}

@property (readonly, copy, nonatomic) NSArray *debuggers; // @synthesize debuggers=_debuggers;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (void)_sendQuery;
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3;
- (BOOL)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;
- (BOOL)receivedRejectResponse;
- (void)start;

@end

