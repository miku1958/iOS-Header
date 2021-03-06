//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLComponents, _LSAppLinkOpenState;

__attribute__((visibility("hidden")))
@interface _LSAppLinkPlugIn : NSObject
{
    NSURLComponents *_URLComponents;
    unsigned long long _limit;
    _LSAppLinkOpenState *_state;
}

@property (strong) NSURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property unsigned long long limit; // @synthesize limit=_limit;
@property (strong) _LSAppLinkOpenState *state; // @synthesize state=_state;

+ (BOOL)canHandleURLComponents:(id)arg1;
+ (id)plugInClasses;
- (void).cxx_destruct;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end

