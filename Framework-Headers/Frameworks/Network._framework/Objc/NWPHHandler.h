//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NWPHHandler : NSObject
{
    NSArray *_allowedEntitlementGroup;
    CDUnknownFunctionPointerType _handlerFunction;
}

@property (strong) NSArray *allowedEntitlementGroup; // @synthesize allowedEntitlementGroup=_allowedEntitlementGroup;
@property CDUnknownFunctionPointerType handlerFunction; // @synthesize handlerFunction=_handlerFunction;

- (void).cxx_destruct;
- (id)initWithHandlerFunction:(CDUnknownFunctionPointerType)arg1 allowedEntitlementGroup:(id)arg2;

@end

