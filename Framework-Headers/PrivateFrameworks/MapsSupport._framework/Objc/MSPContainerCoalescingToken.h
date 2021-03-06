//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerCoalescingToken-Protocol.h>

@class MSPContainer, NSString;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken>
{
    MSPContainer *_container;
    id<NSObject><NSCopying> _context;
    BOOL _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endCoalescingEdits;
- (id)init;
- (id)initWithContainerOwner:(id)arg1 context:(id)arg2;

@end

