//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNChangeNotifierWrapper-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1 notification:(id)arg2;
- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1 notification:(id)arg2;

@end
