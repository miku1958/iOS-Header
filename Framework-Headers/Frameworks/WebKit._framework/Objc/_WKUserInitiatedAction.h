//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKUserInitiatedAction : NSObject <WKObject>
{
    struct ObjectStorage<API::UserInitiatedAction> _userInitiatedAction;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, nonatomic, getter=isConsumed) BOOL consumed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)consume;
- (void)dealloc;

@end
