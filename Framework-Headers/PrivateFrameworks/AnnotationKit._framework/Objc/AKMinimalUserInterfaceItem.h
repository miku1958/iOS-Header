//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class NSString;

@interface AKMinimalUserInterfaceItem : NSObject <AKUserInterfaceItem>
{
    long long _tag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithTag:(long long)arg1;
- (long long)tag;

@end

