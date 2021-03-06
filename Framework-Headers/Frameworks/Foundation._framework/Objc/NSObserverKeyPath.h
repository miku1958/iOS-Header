//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBoundKeyPath.h>

#import <Foundation/NSObserver-Protocol.h>
#import <Foundation/NSOwningObserver-Protocol.h>

@class NSString;

@interface NSObserverKeyPath : NSBoundKeyPath <NSOwningObserver, NSObserver>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_receiveBox:(id)arg1;
- (void)finishObserving;
- (void)setObservation:(id)arg1;

@end

